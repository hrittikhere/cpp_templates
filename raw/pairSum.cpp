#include <bits/stdc++.h> // One header to import all
using namespace std;	 // Declare namespace usage so a lot of function in c are available

void findpair(vector<int> arr, int sum)
{

	unordered_set<int> store;

	for (int i = 0; i < arr.size(); i++)
	{
		int difference = sum - arr[i];

		if (store.find(difference) != store.end())
		{
			cout << difference << " == " << arr[i] << endl;
		}
		store.insert(arr[i]);
	}
}


void solve()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, -6};
	int sum = 4;

	findpair(arr, sum);
}


signed main() // signed because ease of not replacing
{
	ios_base::sync_with_stdio(0); // fast io this and the next two line
	cin.tie(0);
	cout.tie(0);
#ifndef x
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int _t;
	// cin >> _t;
	// while (_t--)
	solve();
}