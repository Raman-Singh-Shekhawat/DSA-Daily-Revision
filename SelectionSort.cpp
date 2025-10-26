// Sorting Algos: Selection Sort, Bubble Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort

// This is: Selection Sort


#include <bits/stdc++.h>

using namespace std;

void selectionSort (int* arr, int n) {

	if (n <= 1) {

		return;
	}


	for (int i = 0; i < (n - 1); i++) {
	
		int minIndex = i;
		int min = arr [minIndex];

		for (int j = i + 1; j < n; j++) {

			if (arr [j] < min) {

				minIndex = j;
				min = arr [minIndex];
			}
		}

		int temp = arr [i];
		arr [i] = min;
		arr [minIndex] = temp;
	}
}

int main () {

	int n;
	cin >> n;

	int* arr = new int [n];

	for (int i = 0; i < n; i++) {

		cin >> arr [i];
	}

	cout << "Elements before sorting: ";
	
	for (int i = 0; i < n; i++) {

		cout << arr [i] << " ";
	}

	cout << endl;

	selectionSort (arr, n);

	cout << "Elements after sorting: ";

	for (int i = 0; i < n; i++) {

		cout << arr [i] << " ";
	}
}