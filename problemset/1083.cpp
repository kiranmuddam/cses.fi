
// Problem : Missing Number
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1083
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

void solve() {
	
	long long int N;
	long long int arraySum = 0;
	cin >> N;
	
	vector<long long int> myArray;
	
	for (int i = 0; i < N - 1; i++) {
		long long int currentInt;
		cin >> currentInt;
		arraySum += currentInt;
		myArray.push_back(currentInt);
	}

	
	long long int nSum = (N * (N + 1)) / 2;
	
	cout<<nSum - arraySum<<endl;
}

int main(int argv, char *argc[]) {
	solve();
}