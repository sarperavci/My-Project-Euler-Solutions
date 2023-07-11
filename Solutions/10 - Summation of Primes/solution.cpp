#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   //PROTOTYPES
   bool isPrime(int num);

   //LOCAL DECLARATIONS
   long long sum = 2;  //start with sum include 2, the only even prime number

   //PROCEDURES
   for (int i = 3; i < 2000000; i += 2)    //skip even number
   {
      if (isPrime(i))
      {
         sum += i;
         //cout << " " << i << " ";
      }
   }

   cout << sum << endl;
   return 0;
}

//---------------------------------------------------------
// FUNCTION DEFINITIONS
//---------------------------------------------------------
bool isPrime(int num)
{
   if (num < 2)
      return false;
   if (num == 2)   //only let one even number pass
      return true;
   if (!(num % 2))  //other even numbers: return false
      return false;
   //You just check for a few numbers, until i > sqrt of num
   //Ex: for 100 use just need to check ODD NUMBER less than sqrt(100) = 10
   //that is 3,5,7,9  not 100 numbers
   for (int i = 3; i <= sqrt((double)num); i += 2)
      if (!(num % i))
         return false;
   return true;
}
