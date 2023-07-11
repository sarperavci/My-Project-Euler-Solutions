#include <iostream>

using namespace std;

bool check_prime(int n) {
  bool is_prime = true;
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
  return is_prime;
}

int getPrime(int n){
  int a = 0;
  int temp=0;
  while (a < n )
  {
  if  (check_prime(temp)){a++;}
    temp++;
  }
  return temp-1;
}

int main() {
  int n;
  cin >> n;
  cout << getPrime(n) << endl;

  return 0;
}
