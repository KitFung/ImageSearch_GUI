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
	ui.resultList->setIconSize(QSize(300, 300));
	ui.resultList->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.resultList->setAcceptDrops(false);

	for (auto i : qvalid_indexs) {
		QString imgpath = qfiles[i] + ".jpg";
		ui.baseImgList->addItem(new QListWidgetItem(QIcon(imgpath), qfiles[i]));
	}

	connect(ui.findSimiliar, SIGNAL(clicked()), this, SLOT(updateResult()));
}

void ImageRetrieval::updateResult() {

	if (!ui.baseImgList->currentItem())
		return;

	QString curInput = ui.baseImgList->currentItem()->text();
	int inputID = qfiles.indexOf(curInput);

	ui.findSimiliar->setDisabled(true);
	ui.findSimiliar->setText("Loading...");


	vector<string> infos;
	vector<int> similiars = find_similiar_image(inputID, infos);

	ui.resultList->clear();
	for (auto id : similiars) {
		QString qimgpath = QString().fromStdString(getFilePath999(id));
		QString rid = QString().fromStdString(to_string(id));
		ui.resultList->addItem(new QListWidgetItem(QIcon(qimgpath), rid));
	}

	ui.infoList->clear();
	for (auto info : infos) {
		QString qinfo = QString().fromStdString(info);
		ui.infoList->addItem(new QListWidgetItem(qinfo));
	}
	

	ui.findSimiliar->setDisabled(false);
	ui.findSimiliar->setText("Find similiar");
}
