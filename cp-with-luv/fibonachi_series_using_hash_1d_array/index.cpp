/**
 *
 Fibonacci Sequence
 n =	0	1	2	3	4	5	6	7	8	9	10	...
 xn =	0	1	1	2	3	5	8	13	21	34	55	...
 */
#include <bits/stdc++.h>
// typedef unsigned long long int 11;
typedef unsigned long long int __u_long;
using namespace std;

// gloval variable start

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
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	for (int i = 2; i <= n; i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout << fib[n];
	


	// code end
}
