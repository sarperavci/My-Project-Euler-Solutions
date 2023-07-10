#include <vector>

#include <iostream>

#include <string>

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

int SmallestMultiple(int n) {
  vector < int > v;
  int p = 1;
  for (int i = 1; i <= n; i++) {

    if (check_prime(i)) {
      v.push_back(i);
    }
  }

  for (int i = 0; i < v.size(); i++) {

    int temp = v[i];

    while (temp * v[i] < n) {

      temp = temp * v[i];

    }

    p *= temp;
    cout << temp << endl;

  }
  return p;
}

int main() {
  cout << SmallestMultiple(20) << endl;
  return 0;
}
