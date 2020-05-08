#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  long Mul = a * b;
// Tinh uoc so chung lon nhat
  if( a == 0 || b == 0 ){
    cout << "Uoc chung lon nhat la : " << a + b;
  }
  else{
    while(a != b){
      if(a > b) a -= b;
      else b -= a;
    }
  }
  if (a == 1) cout << "Hai la nguyen to cung nhau";
  else cout << "Hai khong phai la nguyen to cung nhau";
  return 0;
}
