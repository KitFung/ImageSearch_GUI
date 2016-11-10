#pragma once 

#include <QtWidgets>
#include "core_main.h"

class MyLogger : public QObject {
	Q_OBJECT
private:
	MyLogger() {}
public:
	static MyLogger& instance();
signals:
	void log(QString str);
};
