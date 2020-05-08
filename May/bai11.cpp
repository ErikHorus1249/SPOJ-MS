#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, dem = 0, i = 2;
  bool check;
  cin >> n;
  while(dem <= n){
    check = true;
    // ham kiem tra nguyen to
    for(int j = 2; j <= sqrt(i); j++){
      if(i % j == 0) check = false;
    }
    if(check) cout << i << " ";
    i++;
    dem ++;
  }
}
