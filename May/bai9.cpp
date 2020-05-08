#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  bool check = true;
  for (int i = 2; i <= sqrt(n); i++) {

    if(n % i == 0) check = false;

  }
  if(check) cout << " So n la so nguyen to : " ;
  else cout << " So n khong phai la so nguyen to : " ;
}
