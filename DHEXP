#include<bits/stdc++.h>
 
using namespace std;
 
main(){
	long long n,k;
	cin >> n >> k;
	long long mang[n];
	for(int i = 0; i < n; i++){
		cin >> mang[i];
	}
	long long tong = mang[0];
	sort(mang + 1, mang + n, greater<int>());
	for(long long i = 1; i < n; i++){
		if(i <= k){
			tong += mang[i];
		}
		else tong -= mang[i];
	}
	cout << tong;
} 
