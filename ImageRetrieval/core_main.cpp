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

vector<int> find_similiar_image(int index, vector<string> &infos) {
	vector<int> res;
	res.push_back(index * 100);
	res.push_back(index * 100 + 1);
	res.push_back(index * 100 + 2);
	res.push_back(index * 100 + 3);
	res.push_back(index * 100 + 4);
	res.push_back(index * 100 + 5);
	infos.push_back("A = 1");
	infos.push_back("A2 = 1");
	infos.push_back("A3 = 1");
	infos.push_back("A4 = 1");
	infos.push_back("A5 = 1");
	return res;
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

/*
target:

using setting:
img:0 r:5, c:5, #1:T Acc(100): x.xx%, bestP: x.xx%(s:xx.xx), bestR: x.xx%(s:xx.xx)
img:0 r:5, c:6, #1:F Acc(100): x.xx%,
*/