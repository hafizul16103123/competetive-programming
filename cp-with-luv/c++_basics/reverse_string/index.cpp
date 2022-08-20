#include <bits/stdc++.h>
// typedef unsigned long long int 11;
typedef unsigned long long int __u_long;
using namespace std;

// gloval variable start

// gloval variable end

int main(){
    // for input start
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_DUDGE
    freopen("std/input.txt","r",stdin);
    freopen("std/output.txt","w",stdout);
    #endif
    // for input end

    // code start
	string str ;
	cin >> str;
	string reverse_string;
	int  strLength = str.size();
	for( int i = strLength-1 ; i>=0 ; i--){
		reverse_string.push_back(str[i]);
	}

	cout << reverse_string;
		
    // code end
}