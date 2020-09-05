//1181

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define testMax 20000
#define wordMax 50

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}
int main()
{
	
	int N;
	cin >> N;

	vector<pair<int, string>> word;

	for (int i = 0; i < N; i++)
	{
		string str;
		//scanf_s("%s", &str);
		cin >> str;
		word.push_back(make_pair(str.length(), str));
	}
	sort(word.begin(), word.end(), comp);

	string tmp;

	for (int i = 0; i < N; i++)
	{
		if (tmp == word[i].second) continue;
		cout << word[i].second << "\n";
		tmp = word[i].second;
	}
	
		
	return 0;

}