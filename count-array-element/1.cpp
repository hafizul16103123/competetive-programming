/*
Given array a of n integer.
Given Q queries and in each query given a number X,
Print count of that number in array.

Constraints:
1 <= N <= 10^5
1 <= a[i] <=10^7
1 <= Q <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int has[N];
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		has[a[i]]++;
	}
	
	int  q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		cout << has[x] << endl;
	}


}