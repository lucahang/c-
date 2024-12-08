#include<iostream>
#include<unordered_map>
using namespace std;

int arr[21][21];
int brr[21];
//vector<vector<int>>arr(21);

int main() {
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		brr[i] = n;
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < t; i++) {
		unordered_map<int, int>map;
		int amount = 0;
		for (int j = 0; j <brr[i] ; j++) {
			if (map[arr[i][j]] > 0) {
				amount++;
			}
			map[arr[i][j]]++;
		}
		cout << amount << endl;
	}
	return 0;
}
