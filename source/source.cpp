#include <iostream>

using namespace std;

int main() {
    //double timeres;
	int iter = 0;
	int min, max, n;
	
	cout << "Input count of elements: ";
	cin >> n;
	cout << "Inpit min value: ";
	cin >> min;
	cout << "Input max value: ";
	cin >> max;

	int* arr = new int[n];

	cout << n << " ";

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << " ";

		iter++;
	}

	//timeres = (double)clock() / 1000;
	//cout << iter << " " << timeres << " ";
	cout << "DONE! Every items writen" << endl;
}