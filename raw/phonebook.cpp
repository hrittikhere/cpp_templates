#include <bits/stdc++.h> // One header to import all
using namespace std;	 // Declare namespace usage so a lot of function in c are available

void solve()
{

	map<string, vector<string>> phone;

	phone["hrittik"].push_back("333");
	phone["hrittik"].push_back("3334");

	phone["hrittdik"].push_back("1323233");
	phone["hrittdik"].push_back("23233334");

	for (auto item : phone)
	{

		cout << item.first << " ";
		vector<string> temp = item.second;
		for (auto phonenum : temp)
		{
			cout << phonenum << " ";
		}
		cout << endl;
	}
	// string item_present;
	// cin >> item_present;

	// menu["maggi"] = 6 + menu["maggi"];

	// if (menu.count(item_present) == 0)
	// {
	// 	cout << "Not available";
	// }
	// else
	// {
	// 	cout << "price" << menu[item_present] << endl;

	// 	cout << "Available";
	// }

	// for(pair<string,int> item:menu){
	// 	cout<<item.first<<" - "<<item.second<<endl;
	// }
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