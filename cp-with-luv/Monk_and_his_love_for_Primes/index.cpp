/**
 *
 Fibonacci Sequence
 n =	0	1	2	3	4	5	6	7	8	9	10	...
 xn =	0	1	1	2	3	5	8	13	21	34	55	...
 */
#include <bits/stdc++.h>
// typedef unsigned long long int 11;
// typedef unsigned long long int __u_long;
using namespace std;

// gloval variable start
// use referrence,it removes O(n) complexity
// without referranch vector will direct copy that is expensive O(n)
char toLowerCase(char c)
{
	return 'a' + c - 'A';
};
char toUpperCase(char c)
{
	return 'A' + c - 'a';
};
int isPrime(int diff){
	int isPrime=1;
	for (size_t i = 2; i < diff; i++)
	{
		if(diff%i==0){
			isPrime=0;
			break;
		}
	}
	return isPrime;
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
	//for input end

	// code start
	string s;
	cin >> s;
	int upperCaseAsciiValueTotal = 0;
	int lowerCaseAsciiValueTotal = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = toLowerCase(s[i]);
			upperCaseAsciiValueTotal = upperCaseAsciiValueTotal + s[i];
		}
		else
		{
			s[i] = toUpperCase(s[i]);
			lowerCaseAsciiValueTotal = lowerCaseAsciiValueTotal + s[i];
		}
	}
	int diff = upperCaseAsciiValueTotal - lowerCaseAsciiValueTotal;
	if (diff < 0)
	{
		diff = diff * -1;
	}
	//check prime
	bool res = isPrime(diff);

	cout << res;
	
	// code end
}
