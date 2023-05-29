#include<bits/stdc++.h>
#define a cases[i].first
#define b cases[i].second 
using namespace std;

main(){
	vector< pair <int , int> > cases;
	pair < int , int > tmp;
	tmp.first = 1;
	tmp.second = 1;
	while(tmp.first != 0 && tmp.second != 0){
		cin >> tmp.first >> tmp.second;
		cases.push_back(tmp);
	}
	for(int i = 0; i < cases.size() - 1; i++){
		cout << pow(a,b) << endl;
	}
}
