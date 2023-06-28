#include <vector>
#include <iostream>

using namespace std;

int64_t highest_prime_factor(int64_t x)
{
int64_t i=2;
int64_t highest;
 while (x!=1)
 {
   if (x%i==0)
   {
     x/=i;
     highest =i;
   }
   else{i++;}
 }
 return highest;
}

int main()
{
    int64_t number = 600851475143;
    //cin >> number;
    cout << highest_prime_factor(number);
    return 0;
}
