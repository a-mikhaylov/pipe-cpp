#include <stdlib.h>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <process.h>
#include <math.h>
#include <vector>
#include <iostream>


//enum PIPES { READ, WRITE }; /* Constants 0 and 1 for READ and WRITE */
//#define NUMPROBLEM 8

int main( int argc, char *argv[] )
{
  int arr[10] = {0};

  constexpr size_t cache_length = 16384;
   int32_t cachebuffer[cache_length];
   size_t howmany = 0;

  char* x = (char *)cachebuffer;

   while(std::cin) {
     std::cin.read((char *)cachebuffer, cache_length * sizeof(int32_t));
     howmany += std::cin.gcount();
   }

  for (int i = 0; i < 15; i++) {
    std::cout << i << ": " << cachebuffer[i] << std::endl;
  }

  std::cout << "Jobs done" << std::endl;
}