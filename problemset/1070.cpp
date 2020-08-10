
// Problem : Permutations
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1070
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int N;
	cin >> N;
	
	if (N == 3 or N == 2) {
		cout<<"NO SOLUTION"<<endl;
		return;
	}
	for(int i = 2; i <= N; i = i + 2) {
		cout<<i<<' ';
	}
	
	for(int i = 1; i <= N; i = i + 2) {
		cout<<i<<' ';
	}
}

int main(int argv, char *argc[]) {
	solve();
}