#include <iostream>


using namespace std;

int main() {
   constexpr size_t cache_length = 50;
   int32_t cachebuffer[cache_length];
   size_t howmany = 0;

   char* x = (char *)cachebuffer;

   while(std::cin) {
      std::cin.read((char *)cachebuffer, cache_length * sizeof(int32_t));
      howmany += std::cin.gcount();
   }

	int64_t sum = 0;
    for (int i = 0; i < cache_length; i++) {
		sum += cachebuffer[i];
    }
	std::cout << "Sum of information is: " << sum << std::endl;
	std::cout << "Jobs done" << std::endl;
	/*cin >> iterp >> timeres;
	iter += iterp;
	//timeres += ((double)clock() / 1000);

	cout << "Processed data count: " << n << endl;
	cout << "Summ of elements: " << sum << endl;
	cout << "Count of iterations: " << iter << endl;
	cout << "Preocess's time: " << timeres << "sec" << endl;*/
}