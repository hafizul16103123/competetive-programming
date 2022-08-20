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
    // // way 1
	// string str ;
	// cin >> str;
	// string reverse_string;
	// int  strLength = str.size();
	// for( int i = strLength-1 ; i>=0 ; i--){
	// 	reverse_string.push_back(str[i]);
	// }
    // if(str== reverse_string){
	//     cout << "Pilendrome";
    // }else{
    //     cout << " Not Pilendrome";
    // }


    // Better way
    /**
    we have to check half of the string with
    str[i] == str[str.size()-1-i]
    */

    string str3;
    cin >> str3;
    int strLen=  str3.size();
    bool isPelindrome = true;
    for( int i=0;i<=strLen/2;i++){
        if(str3[i] != str3[(strLen-1)-i]){
            isPelindrome = false;
        }
    }
    cout << isPelindrome;

		
    // code end
}