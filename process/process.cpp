#include <iostream>

using namespace std;

int main() {
	int n;
	int iter, iterp = 0;
	double timeres;
	
	cin >> n;

	int* arr = new int[n];
	cout << n << " ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = arr[i] * arr[i];
		cout << arr[i] << " ";

		iterp++;
	}

	cin >> iter;
	cin >> timeres;
	iter += iterp;
	//timeres += ((double)clock() / 1000);
	cout << iter << " " << timeres << " ";

	cout << "DONE! Every Items processed" << endl;
}