#include <iostream>
#include <cmath>
using namespace std;
int main() 
 {
       int count = 0, num;
       double sum = 0, max = 10000, min =10;
       cout << "Narcissistic number " << endl; 
       for(int i=10; i<=max;i++) 
         {
              num = i;
              while (num != 0) 
                     {
                      num = num / 10;
                      count++; 
                      }
              num = i;
              while (num)
              {
                    sum += pow(num % 10, count);
                    num = num / 10;
               }
              if (sum == i) 
               {
                 cout << i << endl;
                 
                }
                 sum = 0; count = 0;
                  
         }
   }

