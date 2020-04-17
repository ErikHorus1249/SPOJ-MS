#include<iostream>

using namespace std;

long d1, d2, d3; // Khia bao so luong cua ba loai so 1 2 3
long m, n, k, t; // cac du lieu dau vao 
void dem(){ // su dung de dem cac phan tu cua thoa man dung duyet trau
	for(int i = 100000; i <= 999999; i++){
		long m = i, s = 0, sum = 0, c1 = 1;
		while(m != 0){
			long cs = m % 10;
			sum += cs;
			s = s * 10 + cs;
			if(cs == 0) c1 = 0;
			m = m/10;
		}
		if( s == i){ // tao so nghich dao va so sanh de kiem tra dang 3
			d3 ++;
			if( sum % 10 == 0){ // neu tong cac chu so chia het cho 10 thi tang so luong loai 2
				d2 ++;
				if(c1) d1 ++; // neu ko chua so 0 thi them vao loai 1 
			}
		}
	}
}

int check(long d1, long d2, long d3){
	if( d1 < n ) return 0; // neu so loai 1 ko du cung cap tra ve 0
	d2 -= n; d3 -= n; // neu so loai 1 dap ung du thi so  hai loai con laij giam = so loai 1 = n
	if( d2 < m) return 0; // neu so loai 2 ko du cung cap tra ve 0
	d3 -= m;
	if(d3 < k) return 0; // so loai 3 ko du cung cap tra ve 0
	return 1; 
}
int main(){
	d1 = 0; d2 = 0; d3 = 0;
	dem();
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		if(check(d1,d2,d3)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}