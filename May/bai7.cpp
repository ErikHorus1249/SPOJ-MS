#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, s =0;
  cin >> n;
  if(sqrt(n)*sqrt(n)==n) s = 1;

  for (int i = 1; i < sqrt(n); i++) {

    if(n % i == 0) s += 2;

  }

  cout << " So uoc cua n : " << s ;
}
