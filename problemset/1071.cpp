
// Problem : Number Spiral
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1071
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long X, Y;
	cin >> X >> Y;
	
	if (X == Y) {
		cout<<(X * X) - (X - 1)<<endl;
	} else if (X < Y) {
		if (Y % 2 == 0) {
			cout<<((Y * Y) - (Y - 1)) - (Y - X)<<endl;
			
		} else {
			cout<<((Y * Y) - (Y - 1)) + (Y - X)<<endl;
		}
		
	} else {
		if (X % 2 == 0){
			cout<<((X * X) - (X - 1)) + (X - Y)<<endl;	
		} else {
			cout<<((X * X) - (X - 1)) - (X - Y)<<endl;
		}
	}
}

int main(int argv, char *argc[]) {
	int testCases;
	cin >> testCases;
	
	while(testCases--) {
		solve();
	} 
}