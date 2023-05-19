#include <bits/stdc++.h>
using namespace std;
int n, m;
int d[1000000];

main()
{
	cin >> n >> m;
	for (int i = 0; i <= 1000000; i++) d[i] = 0;
	int x;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		d[x]++;
	}
	for (int i = 1; i <= 1000000; i++) d[i] += d[i - 1];
	int b[m];
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	for(int i = 0; i < m; i++){
		cout << d[b[i]] << endl;
	}
}
