/**
 https://www.hackerearth.com/problem/algorithm/jiyas-sequence/
Problem
Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.

Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.For each given test case tell whether the given sequence will be liked by Jiya.

INPUT FORMAT-

First line constains t number of test cases.

Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

OUTPUT FORMAT -

Print "YES" or "NO",whether Jiya likes the sequence or not.

CONSTRAINTS-

1≤t≤100

1≤n≤15

1≤Ai≤10, for all i

 
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
		int n;
		cin >> n;
		long long int multipliedResult =1;
		for (int i = 0; i < n; i++)
		{
			int  x;
			cin >> x;
			multipliedResult=multipliedResult*x;
		}
		if(multipliedResult%10==2 || multipliedResult%10==3 ||multipliedResult%10==5 ){
			cout << "YES"<< endl;
		}else{
			cout << "NO"<< endl;
		}
		
	}
	
	// code end
}
