#pragma once

#include <QThread>
#include <QtWidgets>
#include "core_main.h"

class ExtraFuncThread : public QThread {
	Q_OBJECT
public:
	ExtraFuncThread(int option);

protected:
	void run();

private:
	int option;

signals:
	void doneExtra();
};
