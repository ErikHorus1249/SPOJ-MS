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
    cout << "Uoc chung lon nhat la : " << a << endl;
  }
// Boi so chung nho nhat
  cout << "Boi so chung nho nhat : " << Mul / a;
}
