
// Problem : Weird Algorithm
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1068
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long int N;
	cin >> N;
	
	while(N != 1) {
		cout<<N<<' ';
		cout<<flush;
		if (N % 2 == 0) {
			N = N / 2;
		} else {
			N = (N * 3) + 1;
		}
	}
	cout<<1<<endl;
}


int main(int argv, char *argc[]) {
	solve();
}