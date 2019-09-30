#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<iterator>

using namespace std;

//HeapSort Start
template<typename T>
void test(T &value) {
	for(int i=0; i<size(value); i++)
		cout << value[i] << " ";
	cout << endl;
};

template<typename T>
void heapify(T &A, int floor, int n) {
	int left = 2*floor + 1;
	int right = 2*floor + 2;
	int max ;

	if (left <= n && A[left] > A[floor]) {
		max = left;
		std::cout << "max left = " << A[max] << std::endl;
	}
	else {
		max = floor;
		std::cout << "max floor= " << A[max] << std::endl;
	}

	if (right <= n && A[right] > A[max]) {
		max = right;
		std::cout << "max right= " << A[max] << std::endl;
	}
	if (max != floor) {
		std::cout << "max aint equal to floor"<< std::endl;
		swap(A[floor], A[max]);
		test(A);
		heapify(A, max, n);
	}
};

template<typename T>
void BuildMaxHeap(T &Container, int n) {
	for (int floor = (((n+1)/2)-1); floor !=-1; floor--) {
		std::cout << "called BuildMaxHeap"<<std::endl;
		heapify(Container, floor, n);
	}
}

template<typename T>
void HeapSort(T &Container) {
	int n = (size(Container) - 1);
	BuildMaxHeap(Container, n);

	for (int i = n; n > 0;) {
		cout << "in for" << endl;
		swap(Container[0], Container[n]);
		cout << "swapped" << endl;
		test(Container);
		n--;
		cout << n << endl;
		if (((n +1 / 2) - 1) > -1){
			heapify(Container, 0, n);

		}
		else {
			cout << "sorted"<<endl;
		}
		
		
	}}

//HeapSort End