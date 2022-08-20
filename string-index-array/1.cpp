#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string slug = "YES";
	int len= s.size();
	for (int i = 0; i < len/2; ++i)
	{

		if(s[i]!=s[len-1-i]){
			slug = "NO";
			if(slug=="NO"){
				break;
			}
		}
		
	}
	if(slug=="NO"){
			cout << slug;
	}else{
			cout << slug;
	}
}