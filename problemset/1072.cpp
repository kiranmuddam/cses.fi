
// Problem : Two Knights
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1072/
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// Used Formulat from : https://oeis.org/A172132

#include<bits/stdc++.h>

using namespace std;

void solve() {
	unsigned long long int N;
	cin >> N;
	
	for(int i = 1; i <= N; i++) {
		cout<< ((i - 1) * (i + 4) * ((long long int)pow(i, 2) - (3 * i) + 4) / 2)<<endl;
	}
	
}
int main(int argv, char *argc[]) {
	solve();
}