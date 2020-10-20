#include <iostream>
#include "def.h"

int main(int argc , char** argv)
{
  long data[MAX_SIZE];
  for(long tmp = 0 ; tmp < MAX_SIZE ; tmp++)
  {
    data[tmp] = tmp;
  }
  long data1;
  long data2;
  long t;
  for(long tmp = 0 ; tmp < MAX_SIZE*100 ; tmp++)
  {
    data1 = rand()%MAX_SIZE;
    data2 = rand()%MAX_SIZE;
    t = data[data1];
    data[data1] = data[data2];
    data[data2] = t;
  }
  for(long tmp = 0 ; tmp < MAX_SIZE ; tmp++)
  {
    std::cout << data[tmp] << std::endl;
  }
  return EXIT_SUCCESS;
}


