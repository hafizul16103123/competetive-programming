
#include <bits/stdc++.h>
// typedef unsigned long long int 11;
// typedef unsigned long long int __u_long;
using namespace std;

// gloval variable start
void toUppeCase(string s)
{

	for (int i = 0; i < s.size(); i++)
	{
		s[i]= 'A' + (s[i] - 'a');
	}
	cout << s << endl;
	
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
	while (true)
	{
		string s;
		cin >> s;
		if (s.size() == 0)
		{
			break;
		}
		toUppeCase(s);
	}

	// code end
}
