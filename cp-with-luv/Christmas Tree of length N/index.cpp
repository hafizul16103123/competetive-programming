/**
https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/
Problem
This year Santa wants to make a Christmas tree. But this time he wants to decorate it with numbers as in the Pascal’s triangle. But Santa is very busy in packing the gifts. Now, you being Santa’s friend help in making the tree.

Input: In the first line, you will be given ”t” no. of test cases. For each test case, you will be given a whole number “N”.

Output: For each value N, Print the first N lines in Christmas tree.

Constraints:   1≤T≤100

						1 ≤ N ≤ 40

imput :
2
3
5
output :
1
1 1
1 2 1
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1


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

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n][n];
		a[0][0] = 1;

		for (int i = 1; i < n; i++)
		{
			a[i][0] = 1;
			a[i][i] = 1;
			for (int j = 1; j < i; j++)
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}

	// code end
}
