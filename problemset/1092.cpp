
// Problem : Two Sets
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1092
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

void solve() {
	long long int N;
	cin >> N;
	
	long long int nSum = (N * (N + 1))/2;
	vector<int> firstSet;
	vector<int> secondSet;

	if (nSum % 2 == 0) {
		cout<< "YES" <<endl;
		long long int eachSetSum = nSum / 2;
		
		
		for (int i = N; i > 0; i--) {
						
			if (eachSetSum - i >= 0) {
				eachSetSum = eachSetSum - i;
				firstSet.push_back(i);
			} else {
				secondSet.push_back(i);
			}
		}
		
		cout<<firstSet.size()<<endl;
		for (int i = 0; i < firstSet.size(); i++) {
			cout<< firstSet[i] <<' ';
		}
		cout << endl;
		cout<<secondSet.size()<<endl;
		for (int i = 0; i < secondSet.size(); i++) {
			cout<< secondSet[i] <<' ';
		}
		cout<< endl;
		
	} else {
		cout<<"NO"<<endl;
	}
}

int main(int argv, char *argc[]) {
	solve();
}