#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  do{
    cout << " nhap vao hai so m, n ( m < n) :";
    cin >> m >> n;
  }while(m > n);
  for(int i = m; i <= n; i++){
    if((int)sqrt(i)*(int)sqrt(i)==i){
      cout << i << " ";
    }
  }

}
