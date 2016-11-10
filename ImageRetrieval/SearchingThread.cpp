#include "SearchingThread.h"

SearchingThread::SearchingThread() {}

void SearchingThread::run() {
	this->inputID = 1;
	vector<string> infos;
	vector<int> similiars = find_similiar_image(inputID, infos);
	emit doneSearch(similiars, infos);
}
