// Problem : Repetitions
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1069
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

void solve() {
	string dnaSequence;
	
	cin >> dnaSequence;
	
	int counter = 1;
	int maxSubString = 1;
	for(int i = 0; i < dnaSequence.size() - 1; i++) {
		if(dnaSequence[i] == dnaSequence[i + 1]) {
			counter = counter + 1;
		} else {
			maxSubString = max(counter, maxSubString);
			counter = 1;
		}		
	}
	maxSubString = max(counter, maxSubString);
	cout<<maxSubString<<endl;
	
	
}

int main(int argv, char *argc[]) {
	solve();
}