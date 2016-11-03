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

void ImageRetrieval::init() {
	QString files[] = { "man", "beach", "building", "bus", "dinosaur", "elephant", "flower", "horse", "mountain", "food" };
	int valid_indexs[] = { 0, 1, 2, 3, 4, 6, 7 };
	QListWidget *baseImgList = findChild<QListWidget*>("baseImgList");
	baseImgList->setViewMode(QListWidget::IconMode);
	baseImgList->setIconSize(QSize(200, 200));
	for (auto i : valid_indexs) {
		QString imgpath = files[i] + ".jpg";
		baseImgList->addItem(new QListWidgetItem(QIcon(imgpath), files[i]));
	}
}