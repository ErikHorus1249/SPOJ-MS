
#include "iostream"

using namespace std;

int main(){
  int n, s =0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    if(i % 7 == 0) s += i;
  }
  cout << s ;
}
