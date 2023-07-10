#include <iostream>

using namespace std;

int main() {
  int n = 100;
  cout << abs ((n*(n+1)*(2*n+1)/6) - (n*(n+1)/2)*(n*(n+1)/2)) << endl;
  return 0;
}
