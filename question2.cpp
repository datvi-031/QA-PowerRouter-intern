#include<bits/stdc++.h>
using namespace std;

void print(string s, vector<int> v){
	cout << s;
	for(int i=0; i<(int)v.size(); i++)
		cout << v[i] << " \n"[i == (int)v.size()-1];
}

void answer(vector<int> v) {
	unordered_map<int, int> intCount;
	vector<int> lst1, lst2;
	for(int x: v)
		intCount[x]++;
	for(pair<int, int> p: intCount){
		if(p.second > 1)
			lst1.push_back(p.first);
		else
			lst2.push_back(p.first);
	}
	print("List 1 [Duplicates]: ",lst1);
	print("List 2 [Non Duplicates]: ", lst2);
}

void solve() {
	vector<int> v = {1, 5, 1, 3, 7, 21, 25, 2, 5, 3, 21};
	answer(v);
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