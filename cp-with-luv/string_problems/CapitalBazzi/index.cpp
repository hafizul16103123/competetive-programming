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

// gloval variable end
char upper(char c)
{
	return 'A' + (c - 'a');
}
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
	while (true)
	{
		string s;
		cin >> s;
		if (s.size() == 0)
		{
			break;
		}
		int strLen = s.size();
		for (int i = 0; i < strLen; i++)
		{
			s[i] = upper(s[i]);
		}
		cout << s << endl;
	}
	// code end
}
