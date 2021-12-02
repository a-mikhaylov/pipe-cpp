#include <iostream>


using namespace std;

int main() {
	int n, iter = 0, iterp, sum = 0, a;
	double timeres;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;

		iter++;
	}

	cin >> iterp >> timeres;
	iter += iterp;
	//timeres += ((double)clock() / 1000);

	cout << "Processed data count: " << n << endl;
	cout << "Summ of elements: " << sum << endl;
	cout << "Count of iterations: " << iter << endl;
	cout << "Preocess's time: " << timeres << "sec" << endl;
}