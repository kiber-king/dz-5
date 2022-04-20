
#include <iostream>
using namespace std;

void change(int* arr, int size) {
	int a;
	if (size % 2 == 0) {
		for (int i = 0; i < size; i += 2) {
			a = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = a;
		}
	}
	if (size % 2 != 0) {
		for (int i = 0; i < size-1; i += 2) {
			a = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = a;
		}
	}
}

int main()
{
	int const size = 13;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand()%100 - 50;
	}
	change(arr, size);
	for (int i = 0; i < size; i++) {
		cout <<arr[i]<<" ";
	}
	delete[] arr;
	
}
