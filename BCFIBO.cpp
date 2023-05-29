#include<bits/stdc++.h>
 
using namespace std;

main(){
	int n;
	cin >> n;
	int qhd[n];
	qhd[0] = 0;
	qhd[1] = 1;
	for(int i = 2; i <= n; i++){
		qhd[i] = qhd[i - 2] + qhd[i - 1];
	}
	cout << qhd[n];
}
