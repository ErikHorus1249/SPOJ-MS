#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, dem;
  cin >> n;
  for(int i = 2 ; i <= n; i++){
    dem = 0;
    while(n % i == 0){
      cout << i;
      if(n > i) cout << "x";
      n /= i;
    }

    }
}
