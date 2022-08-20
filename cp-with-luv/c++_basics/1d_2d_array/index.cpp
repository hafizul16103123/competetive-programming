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
    /**
     1 D array

     input:
     5
     1 2 3 4 5
    */

    // int n;
    // cin >> n;
	// int a[n];
    // for( int i =0;i<n;i++){
    //     cin >> a[i];
    // }
    // int sum = 0;
    // for( int i =0;i<n;i++){
    //     sum = sum + a[i];
    // }
    // cout << sum;

    /**
     2 D array
    */
    int m,n; // no of row,column
    cin >> m >> n;
	int a[m][n];
    for( int r =0;r<m;r++){ //iterate row
        for( int c =0;c<n;c++){ //iterate column
           cin >> a[r][c];
        }
    }

    for( int r =0;r<m;r++){
        for( int c =0;c<n;c++){
           cout << a[r][c] << " ";
        }
        cout << endl;
    }
   
 
    // code end
}