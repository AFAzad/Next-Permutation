/*
Problem Statement
Loki, in his bid to prove his intelligence, comes up with a new problem. He gives the Avengers an array containing n elements and asks them to implement the next permutation which rearranges numbers into the lexicographically next greater permutation of numbers. If such an arrangement is not possible, it must rearrange itself as the lowest possible order (i. e., sort in ascending order). The replacement must be in place and use only constant extra memory.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr;
	int temp; 
	while (n--) {
		cin >> temp;
		arr.push_back(temp);
	}
	next_permutation(arr.begin(), arr.end());
	for (auto x: arr) {
		cout << x << " ";
	}
	cout << endl;
	
	return 0;
}