#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, n1 = 0, n2 = 1, n3;
  cin >> n;
  cout << n1 << " "<< n2;
  for(int i = 2; i < n; i++){
    n3 = n1 + n2;
    cout << " " << n3 << " ";
    n1 = n2;
    n2 = n3;
  }
}

//link tham khao : https://vietjack.com/lap_trinh_c/day_fibonacci_trong_c.jsp
