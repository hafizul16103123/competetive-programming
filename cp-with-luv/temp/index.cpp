
#include <bits/stdc++.h>
// typedef unsigned long long int 11;
// typedef unsigned long long int __u_long;
using namespace std;

// gloval variable start
bool f()
{

	int N;
	cin >> N;
	int measures[N];
	for (int i = 0; i < N; i++)
	{
		cin >> measures[i];
	}

	if (measures[0] == measures[1])
	{
		return 0;
	}
	if (measures[0] < measures[1])
	{
		for (int i = 0; i < N;)
		{
			if (measures[i] > measures[i + 1] && measures[i + 1] < measures[i + 2])
			{
				return 0;
			}
			i = i + 2;
		}
		return 1;
	}
	else
	{
		for (int i = 0; i < N;)
		{

			if (measures[i] < measures[i + 1] && measures[i + 1] > measures[i + 2])
			{
				return 0;
			}
			i = i + 2;
		}
		return 1;
	}
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
	int T;
	cin >> T;
	while (T--)
	{
		bool res = f();
		cout << res << endl;
	}
	// code end
}
