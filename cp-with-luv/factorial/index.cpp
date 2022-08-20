/**
 CapitalBazzi
 input : i am practising problem solving
 output :I AM PRACTISING PROBLEM SOLVING
 */
#include <bits/stdc++.h>
// typedef unsigned long long int 11;
typedef unsigned long long int __u_long;
using namespace std;

// gloval variable start
int fact(int n){
	if(n==0) return 1;
	return fact(n-1)*n;
}

// gloval variable end
int main()
{
	// for input start
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_DUDGE
	freopen("std/input.txt", "r", stdin);
	freopen("std/output.txt", "w", stdout);
#endif
	// for input end

	// code start
	int n;cin >> n;
	cout << fact(n);


	// code end
}
