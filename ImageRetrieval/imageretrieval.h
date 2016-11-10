#ifndef IMAGERETRIEVAL_H
#define IMAGERETRIEVAL_H

#include <QtWidgets>
#include "ui_imageretrieval.h"
#include "SearchingThread.h"
#include "core_main.h"

class ImageRetrieval : public QMainWindow
{
	Q_OBJECT

public:
	ImageRetrieval(QWidget *parent = 0);
	~ImageRetrieval();

private slots:
	void startSearch();
	void updateResult(QVector<int> res, QVector<QString> infos);

private:
	Ui::ImageRetrievalClass ui;
	void init();
	void setGOPic();
	void setLoadGif();

};

#endif // IMAGERETRIEVAL_H
