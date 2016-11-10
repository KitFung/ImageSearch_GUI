#ifndef IMAGERETRIEVAL_H
#define IMAGERETRIEVAL_H

#include <QtWidgets>
#include "ui_imageretrieval.h"
#include "SearchingThread.h"
#include "ExtraFuncThread.h"
#include "core_main.h"
#include "MyLogger.h"

class ImageRetrieval : public QMainWindow
{
	Q_OBJECT

public:
	ImageRetrieval(QWidget *parent = 0);
	~ImageRetrieval();

private slots:
	void startSearch();
	void updateResult(QVector<int> res, QVector<QString> infos);
	void startExtraFunc();
	void doneExtraFunc();
	void addLog(QString str);
private:
	Ui::ImageRetrievalClass ui;
	void init();
	void setGOPic();
	void setLoadGif();
	void resume();
};

#endif // IMAGERETRIEVAL_H
