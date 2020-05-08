
#include "iostream"

using namespace std;

int main(){
  int n;
  cin >> n;
  long s = 0;
  for (int i = 1; i <= n; i++) {
    long M = 1;
    for(int j = 1; j <= i; j++){
      M *= j;
    }
    s += M;
  }
  cout << s;
  return 0;
}
