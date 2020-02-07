#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
//#define  BLOCK_SIZE     16

/*
   // build cache
   int number_of_blocks = CACHE_SIZE / BLOCK_SIZE;
   std::vector<unsigned long long> cache;

   for (int i = 0; i < number_of_blocks; ++i)
      cache.push_back(0);

   // read memory accesses from standard input
   unsigned long long read_line;
   int total = 0, miss = 0;
   while (std::cin >> std::hex >> read_line) {
      total++;
      unsigned long long tag   = read_line >> (10 + 4); // get tag
      unsigned long long index = read_line >> 4;        // get index
      index = index & 0x00000000000003FF;

      // check for miss
      if (cache[index] != tag) {
         cache[index] = tag;
         miss++;
      }
   }
   double miss_rate = (double)miss / (double)(total);

   printf("total accesses: %d\n", total);
   printf("miss rate:      %0.2lf\n", miss_rate * 100.0);

*/

int main(){
  //int caches[5] = {1024, 2048, 4096, 8192, 16384};
  //int assoc[5] = {1, 2, 4, 8};
  //int tagSize;
  //int indexSize;
  ofstream outtie("output.txt");
  if(outtie.is_open()){
    outtie << "        LRU Replacement Policy\n";
    outtie << left;
    outtie << setw(3) << "   " << setw(7) << "1024" << setw(7) << "2048" << setw(7) << "4096" << setw(7) 
	   << "8192" << setw(7) << "16384" << endl;   
  //for(int i = 0; i < 5; i++){


  //}
  //
    outtie.close();
  }
} 
