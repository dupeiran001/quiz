// 编写一个程序解决选择问题。令K=N/2 。画出表格显示你的程序对于N为不同值的运行时间
//
// author  : 杜沛然
// licence : GPL V3
// e-mail  : 2083856903@qq.com
// date    : 20201019
#include <iostream>
#include <vector>
#include "def.h"

int main(int argc , char** argv)
{
  std::vector<long> result;
  long tmp_max;
  long data[MAX_SIZE];
  for(int tmp = 0; tmp < MAX_SIZE ; tmp++)
  {
    std::cin >> data[tmp];
  }
  tmp_max = data[0];
  long tmp;
  for(int count = 0 ; count < MAX_SIZE ; count++)
  {
    for(tmp = 0; tmp < MAX_SIZE ; tmp++)
    {
      if(data[tmp] >= data[tmp_max])
      {
        tmp_max = tmp;
      }
    }
    result.push_back(data[tmp_max]);
    data[tmp_max] = 0;
    tmp_max = data[0];
  }
  auto begin = result.begin();
  for(tmp = 0 ; tmp != K ; tmp++)
    begin++;
  std::cout << *begin;
  return EXIT_SUCCESS;
  

}
