#include <stdlib.h>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <process.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <time.h>


//enum PIPES { READ, WRITE }; /* Constants 0 and 1 for READ and WRITE */
//#define NUMPROBLEM 8

int main( int argc, char *argv[] )
{
  //int arr[10] = {0};
  int32_t iter = 0;
  constexpr size_t cache_length = 50;
   int32_t cachebuffer[cache_length];
   size_t howmany = 0;

  char* x = (char *)cachebuffer;

   while(std::cin) {
     std::cin.read((char *)cachebuffer, cache_length * sizeof(int32_t));
     howmany += std::cin.gcount();
     iter++;
   }
  int32_t rep = cachebuffer[0];
  for (int i = 1; i < rep + 1; i++) {
    cachebuffer[i] *= cachebuffer[i];
    iter++;
    //std::cout << i << ": " << cachebuffer[i] << std::endl;
  }

  cachebuffer[rep + 1] += iter;
  cachebuffer[rep + 2] += (clock() * 1000);
   std::cout.write(x, cache_length * sizeof(int32_t));

  //std::cout << "Jobs done" << std::endl;
}