#include <stdlib.h>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <process.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <time.h>

int main( int argc, char *argv[] )
{
  int32_t repeat = 10;
  int32_t iter = 0;
   constexpr size_t buflength = 50;
   std::vector<int32_t> buffer(buflength, 0);
  buffer[0] = repeat;
  int min, max;
  min = 10;
  max = 1000;
  /*std::cout << "Input minimum value: ";
  std::cin >> min;
  std::cout << "Input maximum value: ";
  std::cin >> max;*/
   for (int32_t i = 1; i < repeat + 1; i++) {
     buffer[i] = rand() % (max - min) + min + 1;
     iter++;
  }

  buffer[repeat + 1] = iter;
  buffer[repeat + 2] = clock();
  char* x = (char *)buffer.data();

  std::cout.write(x, buflength * sizeof(int32_t));
}