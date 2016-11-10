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

public slots:
	void startSearch();
	void updateResult(vector<int> similiars, vector<string> infos);
private:
	Ui::ImageRetrievalClass ui;

	SearchingThread searchThread;
	void init();
};

#endif // IMAGERETRIEVAL_H
