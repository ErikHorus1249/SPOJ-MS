#include "iostream"

using namespace std;

int main(){
  long n ;
  int so_dao = 0, du;
  cin >> n;
  long so_ban_dau = n;
  while(n != 0){
    du = n % 10;
    so_dao = so_dao * 10 + du;
    n /= 10;
  }
  if(so_dao == so_ban_dau) cout << "So n la so thuan nghich";
  else cout << "So n khong phai la so thuan nghich";
  return 0;
}
