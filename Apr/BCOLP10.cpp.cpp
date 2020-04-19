#include<bits/stdc++.h>

using namespace std;

int main(){
	string a,b;
	int count = 0;
	cin >> a >> b;
	for(int i = 0; i < a.length(); i++){
		for( int j = 0; j < b.length(); j ++){
			if(a[i] == b[j]){
				count ++;

			}
		}
	}
	cout << count << endl;
	cout << a.length() + b.length() - 2 * count << endl;
	return 0;
}