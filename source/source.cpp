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
   int32_t repeat = 10;

   constexpr size_t buflength = 16384;
   std::vector<int32_t> buffer(buflength, 0);

   for (int32_t i = 0; i < repeat; i++) {
     buffer[i] = i;
  }

  char* x = (char *)buffer.data();

  std::cout.write(x, buflength * sizeof(int32_t));
}