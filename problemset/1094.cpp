
// Problem : Increasing Array
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1094
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std; 

void solve() {
	long long int N;
	cin >> N;
	vector<long long int> myArray;
	
	for(long long int i = 0; i < N; i++) {
		long long int currentInt;
		cin >> currentInt;
		myArray.push_back(currentInt);
	}
	long long int totalMoves = 0;
	
	for(long long int i = 0; i < myArray.size() - 1; i++) {
		if(myArray[i] <= myArray[i + 1]) {
			continue;
		} else {
			totalMoves += myArray[i] - myArray[i + 1];
			myArray[i + 1] = myArray[i];
		}
	}
	cout<<totalMoves<<endl;
}


int main(int argv, int *argc[]) {
	solve();
}