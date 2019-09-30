#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<iterator>

using namespace std;
template<typename T>
void test(T &value) {
	for(int i=0; i<size(value); i++)
		cout << value[i] << " ";
	cout << endl;
};

template<typename T>
void heapify(T &A, int floor) {
	int left = 2*floor + 1;
	int right = 2*floor + 2;
	int max ;

	if (left <= (size(A)-1) && A[left] > A[floor]) {
		max = left;
		std::cout << "max left = " << A[max] << std::endl;
	}
	else {
		max = floor;
		std::cout << "max floor= " << A[max] << std::endl;
	}

	if (right <= (size(A)-1) && A[right] > A[max]) {
		max = right;
		std::cout << "max right= " << A[max] << std::endl;
	}
	if (max != floor) {
		std::cout << "max aint equal to floor"<< std::endl;
		swap(A[floor], A[max]);
		test(A);
		heapify(A, max);
	}
};

template<typename T>
void BuildMaxHeap(T &Container) {
	for (int floor = ((size(Container)/2)-1); floor !=-1; floor--) {
		std::cout << "called BuildMaxHeap"<<std::endl;
		heapify(Container, floor);
	}
}