#include<bits/stdc++.h>
 
using namespace std;

int factor(int n){
	if(n == 0) return 1;
	else return n * factor(n - 1);
}

main(){
	vector <int> n;
	int a = 1;
	while(a != 0) {
		cin >> a;
		n.push_back(a);
	}
	for(int i = 0; i < n.size() - 1; i++){
		cout << factor(n[i]) << endl;
	}
}
