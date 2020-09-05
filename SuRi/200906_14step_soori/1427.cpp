//1427
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	sort(str.begin(), str.end());

	for (int i = str.length() - 1; i >= 0; --i)
		cout << str[i];

}