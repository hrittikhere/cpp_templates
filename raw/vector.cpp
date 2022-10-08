#include <bits/stdc++.h> // One header to import all
using namespace std;	 // Declare namespace usage so a lot of function in c are available

void solve()
{
	// vector<int> arr(10, 7);

	// // // vector<int> arr={1,2,3};
	// arr.pop_back();
	// arr.push_back(4);

	// cout << arr.size();
	// // cout<<arr.capacity();

	// for (int number : arr)
	// {
	// 	cout << number << endl;
	// }

	// for(int index=0; index<arr.size(); index++){
	// 	cout<<arr[index];
	// }

	vector<vector<int>> arr = {
		{1, 2, 3},
		{33, 34}};

	arr[0][0] += 10;
	for (int i = 0; i < arr.size(); i++)
	{
		for (int number : arr[i])
		{
			cout << number << ", ";
		}
		cout << endl;
	}
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
