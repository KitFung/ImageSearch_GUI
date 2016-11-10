#include "ExtraFuncThread.h"

ExtraFuncThread::ExtraFuncThread(int option) {
	this->option = option;
}


void ExtraFuncThread::run() {
	extra_fucntion(option + 1);

	emit doneExtra();
}