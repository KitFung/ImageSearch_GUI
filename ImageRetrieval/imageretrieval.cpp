#include "imageretrieval.h"

ImageRetrieval::ImageRetrieval(QWidget *parent)
: QMainWindow(parent) {
	ui.setupUi(this);
	init();
}

ImageRetrieval::~ImageRetrieval() {
	init();
}


//QVector<QString> qfiles = { "man", "beach", "building", "bus", "dinosaur", "elephant", "flower", "horse", "mountain"<< "food" };
QVector<QString> qfiles(QVector<QString>() << "man" << "beach" << "building" << "bus" << "dinosaur" << "elephant" << "flower" << "horse" << "mountain" << "food");

int qvalid_indexs[] = { 0, 1, 2, 3, 4, 6, 7 };

QStringList extraFuncList(
	QStringList() <<
	"pixel-by-pixel" <<
	"hsv histrogram" <<
	"splited + hsv histrogram" <<
	"SURF" <<
	"SIFT" <<
	"ORB" <<
	"PSNR" <<
	"MSSIM" <<
	"SVM compare" <<
	"pixel-by-pixel + hsv" <<
	"equalized greyscale (EG)" <<
	"EG + hsv histrogram" <<
	"EG + PSNR" <<
	"high contrast + hsv histrogram" <<
	"high contrast + splited hsv histrogram" <<
	"high contrast + PSNR" <<
	"high contrast + splited + PSNR" <<
	"high contrast + MSSIM" <<
	"splited equalized greyscale" <<
	"high contrast + rgb histrogram" <<
	"high contrast + rgb histrogram + circle mask" <<
	"high contrast + hsv histrogram + circle mask" <<
	"EG + circle mask" <<
	"hsv histrogram + circle mask + PSNR" <<
	"high contrast + hsv histrogra + SURF" <<
	"high contrast + hsv histrogram + SIFT" <<
	"high contrast + hsv histrogram + ORB" <<
	"Canny + contour compare"
	);

void ImageRetrieval::init() {

	ui.baseImgList->setViewMode(QListWidget::IconMode);
	ui.baseImgList->setIconSize(QSize(200, 200));
	ui.baseImgList->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.baseImgList->setAcceptDrops(false);
	ui.resultList->setViewMode(QListWidget::IconMode);
	ui.resultList->setIconSize(QSize(350, 350));
	ui.resultList->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.resultList->setAcceptDrops(false);

	for (auto i : qvalid_indexs) {
		QString imgpath = qfiles[i] + ".jpg";
		ui.baseImgList->addItem(new QListWidgetItem(QIcon(imgpath), qfiles[i]));
	}
	ui.extraFunc->addItems(extraFuncList);

	setGOPic();
	MyLogger& logger = MyLogger::instance();
	connect(ui.findSimiliar, SIGNAL(clicked()), this, SLOT(startSearch()));
	connect(ui.extraBtn, SIGNAL(clicked()), this, SLOT(startExtraFunc()));

	connect(&logger, SIGNAL(log(QString)), this, SLOT(addLog(QString)));


}

void ImageRetrieval::setGOPic() {
	QPixmap pic("./go.jpg");
	QPixmap npic = pic.scaledToWidth(200);
	ui.loader->setPixmap(npic);
	ui.loader->show();
}

void ImageRetrieval::setLoadGif() {
	QMovie *mov = new QMovie("./loader.gif");
	mov->setScaledSize(QSize(200, 200));
	ui.loader->setMovie(mov);
	ui.loader->show();
	mov->start();
}


void ImageRetrieval::resume() {
	ui.findSimiliar->setEnabled(true);
	ui.findSimiliar->setText("Find similiar");
	ui.extraBtn->setEnabled(true);
	ui.extraBtn->setText("Try");
	setGOPic();
}

void ImageRetrieval::startSearch() {

	if (!ui.baseImgList->currentItem())
		return;

	QString curInput = ui.baseImgList->currentItem()->text();
	int inputID = qfiles.indexOf(curInput);

	ui.extraBtn->setEnabled(false);
	ui.findSimiliar->setEnabled(false);
	ui.findSimiliar->setText("Loading...");
	setLoadGif();

	SearchingThread *searchThread = new SearchingThread(inputID);
	connect(searchThread, SIGNAL(doneSearch(QVector<int>, QVector<QString>)), this, SLOT(updateResult(QVector<int>, QVector<QString>)));
	searchThread->start();
}

void ImageRetrieval::updateResult(QVector<int> res, QVector<QString> infos) {

	ui.resultList->clear();
	for (auto id : res) {
		QString qimgpath = QString::fromStdString(getFilePath999(id));
		QString rid = QString::fromStdString(to_string(id));
		ui.resultList->addItem(new QListWidgetItem(QIcon(qimgpath), rid));
	}

	ui.infoList->clear();
	for (auto info : infos) {
		QString qinfo = info;
		ui.infoList->addItem(new QListWidgetItem(qinfo));
	}
	resume();
}


void ImageRetrieval::startExtraFunc() {
	int option = ui.extraFunc->currentIndex();

	ui.findSimiliar->setEnabled(false);
	ui.extraBtn->setEnabled(false);
	ui.extraBtn->setText("Analysising");
	ui.resultList->clear();
	ui.infoList->clear();
	setLoadGif();

	ExtraFuncThread *exThread = new ExtraFuncThread(option);
	connect(exThread, SIGNAL(doneExtra()), this, SLOT(doneExtraFunc()));
	exThread->start();
}

void ImageRetrieval::doneExtraFunc() {
	resume();
}

void ImageRetrieval::addLog(QString str) {
	ui.infoList->addItem(new QListWidgetItem(str));
};
