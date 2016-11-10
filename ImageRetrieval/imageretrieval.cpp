#include "imageretrieval.h"

ImageRetrieval::ImageRetrieval(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
}

ImageRetrieval::~ImageRetrieval()
{
	init();
}


QVector<QString> qfiles = { "man", "beach", "building", "bus", "dinosaur", "elephant", "flower", "horse", "mountain", "food" };
int qvalid_indexs[] = { 0, 1, 2, 3, 4, 6, 7 };

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

	setGOPic();

	connect(ui.findSimiliar, SIGNAL(clicked()), this, SLOT(startSearch()));
	//connect(&searchThread, SIGNAL(doneSearch2(int)), this, SLOT(updateResult2(int)));
	
}

void ImageRetrieval::setGOPic() {
	QPixmap pic("./go.jpg");
	QPixmap npic = pic.scaledToWidth(100);
	ui.loader->setPixmap(npic);
	ui.loader->show();
}

void ImageRetrieval::setLoadGif() {
	QMovie *mov = new QMovie("./loader.gif");
	mov->setScaledSize(QSize(100, 100));
	ui.loader->setMovie(mov);
	ui.loader->show();
	mov->start();
}

void ImageRetrieval::startSearch() {

	if (!ui.baseImgList->currentItem())
		return;

	QString curInput = ui.baseImgList->currentItem()->text();
	int inputID = qfiles.indexOf(curInput);

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


	ui.findSimiliar->setEnabled(true);
	ui.findSimiliar->setText("Find similiar");
	setGOPic();
}
