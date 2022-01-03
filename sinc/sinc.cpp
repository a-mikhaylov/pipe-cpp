#include <iostream>
#include <time.h>

using namespace std;

int main() {
   constexpr size_t cache_length = 50;
   int32_t cachebuffer[cache_length];
   size_t howmany = 0;
	int32_t iter = 0;
   char* x = (char *)cachebuffer;

   while(std::cin) {
      std::cin.read((char *)cachebuffer, cache_length * sizeof(int32_t));
      howmany += std::cin.gcount();
	  iter++;
   }
	int32_t rep = cachebuffer[0];
	float time;
	int64_t sum = 0;
    for (int i = 1; i < rep + 1; i++) {
		sum += cachebuffer[i];
		iter++;
    }

	cachebuffer[rep + 1] += iter;
	cachebuffer[rep + 2] += (clock() * 1000);
	time = cachebuffer[rep + 2] / 1000;
	std::cout << "Sum of information is: " << sum << std::endl;
	std::cout << "Count of information is: " << cachebuffer[0] << std::endl;
	std::cout << "Count of iterations is: " << cachebuffer[rep + 1] << std::endl;
	std::cout << "Process time: " << time << std::endl;
	std::cout << "Jobs done" << std::endl;


	/*cin >> iterp >> timeres;
	iter += iterp;
	//timeres += ((double)clock() / 1000);

	cout << "Processed data count: " << n << endl;
	cout << "Summ of elements: " << sum << endl;
	cout << "Count of iterations: " << iter << endl;
	cout << "Preocess's time: " << timeres << "sec" << endl;*/
}