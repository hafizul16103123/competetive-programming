/**
https://www.hackerearth.com/problem/algorithm/gpl/
Problem
It's Binod's Birthday and all his friends want to have a great GPL for him. But Binod being so schemy, he locked his room with a secret number and given his friends a Binary string of secret number.

His friends have no knowledge about binary strings. Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.

Binary String is a string with only '0' and '1'  as it's characters.

Examples : "000101", "10101", "1", "0", "01" are Binary Strings.

    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings

Input Format

First Line : Integer  that denotes number of test cases .
For each Test Case : Integer  for size of Binary String  and Binary String  .
Output Format

For each Test case, print Single Line integer containing the secret number.
Note: Secret number will always be greater than or equal to 0.

 
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

	int t ;
	cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int strLen= s.size();
		long long result = 0;
		long long power2 = 1;
		for (int i = strLen-1; i >= 0; i--)
		{
			int binary_digit = s[i]-'0';
			result = result+(binary_digit*power2);
			power2 = power2 * 2;
			
		}
		cout << result << endl;
		
		
	}


	
	// code end
}
