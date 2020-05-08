

#include "iostream"

using namespace std;

int main(){
  int n;
  long s = 0, s1 = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    s += i;
    if(i % 2 == 0) s1 += i;
  }
  cout << s << " " << endl;
  cout << s1 << " " << endl;
  cout << s - s1 << " " << endl;
  return 0;
}
