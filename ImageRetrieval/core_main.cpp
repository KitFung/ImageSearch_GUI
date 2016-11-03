#include "core_main.h"

#define IMAGE_LIST_FILE "inputimage.txt"  // NOTE: this is relative to current file

/*
man			: 0 ~ 99, 100?
beach		: 101 ~ 199, 100?
building	: 200 ~ 299
bus			: 300 ~ 399
dinosaur	: 400 ~ 499
elephant	: 500 ~ 599
flower		: 600 ~ 699
horse		: 700 ~ 799
mountain	: 800 ~ 899
food		: 900 ~ 999
*/

// not supported: 5 
string files[] = { "man", "beach", "building", "bus", "dinosaur", "elephant", "flower", "horse", "mountain", "food" };
int valid_indexs[] = { 0, 1, 2, 3, 4, 6, 7 };

string getFilePath(int index){
	if (index < 0 || index >= sizeof(files))
		index = 0;
	string s("./");
	s.append(files[index]).append(".jpg");
	return s;
}

void file_select_instruction() {
	cout << "Which file? (0:'man' 1:'beach', 2:'building', 3:'bus', 4:'dinosaur', " << endl
		<< "            6:'flower', 7:'horse')? " << endl;
}

string askFile(){
	file_select_instruction();
	int index;
	cin >> index;
	while (index <-2 || index == 5 || index > 7)
	{
		file_select_instruction();
		cin >> index;
	}
	return getFilePath(index);
}

// "../image.orig/685.jpg"
string getFilePath999(int index){
	if (index < 0 || index > 999)
		index = 0;
	string s("../image.orig/");
	s.append(std::to_string(index) + ".jpg");
	return s;
}

Mat get_input_img(int index) {
	string filepath = getFilePath(index);

	Mat src_input = imread(filepath); // read input image
	if (!src_input.data)
	{
		printf("Cannot find the input image!\n");
		exit(1);
	}
	return src_input;
}

void waitESC() {
	// Wait for the user to press a key in the GUI window.
	//Press ESC to quit
	int keyValue = 0;
	while (keyValue >= 0)
	{
		keyValue = cvWaitKey(0);

		switch (keyValue)
		{
		case 27:keyValue = -1;
			break;
		}
	}
}

double solve(int index) {
	Mat src_input = get_input_img(index);

	//imshow("Input", src_input);
	//double acc = hsv_compare(src_input, index);
	// double acc = hsv_split_compare(src_input, index);
	// double acc = surf_compare(src_input, index);
	// double acc = sift_compare(src_input, index);
	// double acc = orb_compare(src_input, index);
	double acc = svm_compare(src_input, index);
	return acc;
}

void test_all_average() {
	double cnt = 7;
	double totacc = 0;
	vector<double> accs;
	for (auto idx : valid_indexs) {
		double acc = solve(idx);
		totacc += acc;
		accs.push_back(acc);
	}

	for (int i = 0; i < accs.size(); ++i) {
		int idx = valid_indexs[i];
		double acc = accs[i];
		cout << "Case " << idx << " acc: " << acc << endl;
	}
	cout << "Total average acc: " << totacc / cnt << endl;
}

void test_r1c1_to_r10c10() {
	for (auto v_index : valid_indexs){
		Mat src_input = get_input_img(v_index);

		printf("Work for img \"%s\" :\n", files[v_index].c_str());
		for (int i = 0; i < 11; i++)
			for (int j = 0; j < 11; j++)
				hsv_split_compare(src_input, v_index, false, i + 1, j + 1);

		printf("Done for img \"%s\".\n", files[v_index].c_str());

	}
}

void test_all_hsv_compare() {
	for (auto v_index : valid_indexs){
		Mat src_input = get_input_img(v_index);

		printf("Work for img \"%s\" :\n", files[v_index].c_str());
		hsv_compare(src_input, v_index);
		printf("Done for img \"%s\".\n", files[v_index].c_str());

	}
}

void core() {
	Mat src_input;

	Mat max_img;

	file_select_instruction();
	cout << " or -1 for all average: " << endl;
	cout << " or -2 for save_allDescriptions_YML(): " << endl;
	cout << " or -3 for test from r1c1 to r10c10  : " << endl;
	cout << " or -4 for test all hsv_compare()    : " << endl;

	int index;
	cin >> index;

	if (index == -2){
		int type;
		cout << " 0 for sift , 1 for surf, 2 for orb: " << endl;
		cin >> type;
		if (type == 0)
			save_allSIFTDescriptions_YML();
		else if (type == 1)
			save_allSURFDescriptions_YML();
		else
			save_allORBDescriptions_YML();
		waitESC();
		return;
	}
	else if (index == -1) {
		test_all_average();
	}
	else if (index == -3){
		test_r1c1_to_r10c10();
	}
	else if (index == -4){
		test_all_hsv_compare();
	}
	else {
		solve(index);
	}

	do{
		cout << "input -1 for exit...\n";
		cin >> index;
	} while (index != -1);

	waitESC();
}


/*
target:

using setting:
img:0 r:5, c:5, #1:T Acc(100): x.xx%, bestP: x.xx%(s:xx.xx), bestR: x.xx%(s:xx.xx)
img:0 r:5, c:6, #1:F Acc(100): x.xx%,
*/