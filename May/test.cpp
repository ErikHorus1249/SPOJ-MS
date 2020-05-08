#include<bits/stdc++.h>

using namespace std;
// int a[100];
//
// int fibo(int n)
//     {
//       for(int i = 0; i < n - 1; i++){
//         a[i] += a[i+1];
//       }
//     }
// int main(){
//   int t, n;
//   cin >> t;
//   while(t--){
//     cin >> n;
//     int a[n];
//     for(int i = 0; i< n; i++){
//       cin >> a[i];
//     }
//   }
//   return 0;
// }

int main(){
  int a[10];
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int j = n; j > 1; j--){
  for(int i = 0; i < j-1; i++){
    a[i] += a[i+1];
  }
  a[j-1] = 0;
  for(int i = 0; i < n; i++){
    if(a[i]!=0) cout << a[i] << " ";
  }
  cout << endl;
}
}
