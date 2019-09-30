#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<iterator>
#include "SortLib.h"

using namespace std;


int main() {
	vector<float>jusuio{ 0,2.553,543,1.3,6.4,33,3};
	int maximiliano[8] = { 1,2,1,24,2,5,6,9 };
	string aurelio = "wackass";
	HeapSort(jusuio);
	HeapSort(maximiliano);
	test(jusuio);
	test(maximiliano);

};
