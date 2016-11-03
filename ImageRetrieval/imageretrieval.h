#ifndef IMAGERETRIEVAL_H
#define IMAGERETRIEVAL_H

#include <QtWidgets>
#include "ui_imageretrieval.h"
#include "core_main.h"

class ImageRetrieval : public QMainWindow
{
	Q_OBJECT

public:
	ImageRetrieval(QWidget *parent = 0);
	~ImageRetrieval();

public slots:
	void updateResult();

private:
	Ui::ImageRetrievalClass ui;
	
	void init();
};

#endif // IMAGERETRIEVAL_H
