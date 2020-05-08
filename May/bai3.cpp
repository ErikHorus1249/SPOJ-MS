#include "iostream"

using namespace std;
float recursion(int n){
  if(n == 1) return 1;
  else{
  // return (float)(1/n + recursion(n-1));
  return (float)1/n + recursion(n-1);
}
}
int main(){
  int n;
  cin >> n;
  cout << recursion(n);
  return 0;
}
