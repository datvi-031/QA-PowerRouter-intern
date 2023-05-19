#include<bits/stdc++.h>
using namespace std;

char answer(vector<char> v) {
	unordered_map<char, int> charCount;
	if((int)v.size()%2 == 0) return v[0];

	for(char ch: v)
		charCount[ch]++;

	for(pair<char, int> x: charCount) {
		if(x.second%2 != 0)
			return x.first;
	}
	return '\0';
}

void solve() {
	vector<char> v = {'a','m','m','a','d'};
	vector<char> v2 = {'r', 'e', 'd', 'i', 'v', 'i', 'd', 'e', 'r'};
	cout << answer(v) << endl;
	cout << answer(v2) << endl;
}

// main function
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	clock_t z = clock();
	solve();
	cerr << "Run time: " << ((double)(clock()-z)/CLOCKS_PER_SEC) << "\n";
	return 0;
}