#include <vector>
#include <iostream>
#include <string>
using namespace std;

string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++){swap(str[i], str[n - i - 1]);}
    return str;

}

bool isItPalindrom(string str)
{
  if (str[-1]=='0'){return false;}
  else if (stoi(str)-stoi(reverseStr(str))==0){return true;}
  return false;
}

int findPalindromlessthan(int number){

int pal=0;
  for(int i=1000; i>100; i--)
  {
    for(int j=1000; j>100; j--)
    {
      if(isItPalindrom(to_string(i*j)) && i*j>pal && i*j<number ){pal=i*j;}
    }
  }
  return pal;
}


int main(){
cout << findPalindromlessthan(999*999);
  //string in;
  //cin >> in;
  //cout << isItPalindrom(in);

  return 0;
}
