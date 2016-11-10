#include "SearchingThread.h"

SearchingThread::SearchingThread(int inputID) {
	this->inputID = inputID;
}

void SearchingThread::run() {
	vector<string> infos;
	vector<int> similiars = find_similiar_image(inputID, infos);

	QVector<int> res = QVector<int>::fromStdVector(similiars);
	QVector<QString> resinfo;
	for (auto s : infos) resinfo.push_back(QString::fromStdString(s));
	
	// QThread::sleep(2);
	
	emit doneSearch(res, resinfo);
}
