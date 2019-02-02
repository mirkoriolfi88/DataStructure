#include "vector_methods.h"
using namespace std;
#include <iostream>
#include <iomanip>

void swap(int & a, int & b)
{
	int c = a;
	a = b;
	b = c;
}

void printVector(vector<int> vett, int n)
{
	int i;
	cout << "[";
	for (i = 0; i < n; i++) {
		cout << setw(2) << vett[i] << " ";
	}
	cout << "]\n";
}

void printVector(vector<double> vett, int n)
{
	int i;
	cout << "[";
	for (i = 0; i < n; i++) {
		cout << setw(2) << vett[i] << " ";
	}
	cout << "]\n";
}

void bubblesort(vector<int> vett, int n)
{
	int i, k;
	for (k = n - 1; k > 0; k--) {
		for (i = 0; i < k; i++) {
			if (vett[i] > vett[i + 1]) {
				swap(vett[i], vett[i + 1]);
			}
			cout << "k= " << setw(2) << k << " i= " << setw(2) << i << " ";
			printVector(vett, n);
		}
		cout << endl;
	}
}

void bubblesort(vector<double> vett, int n)
{
	int i, k;
	for (k = n - 1; k > 0; k--) {
		for (i = 0; i < k; i++) {
			if (vett[i] > vett[i + 1]) {
				swap(vett[i], vett[i + 1]);
			}
			cout << "k= " << setw(2) << k << " i= " << setw(2) << i << " ";
			printVector(vett, n);
		}
		cout << endl;
	}
}