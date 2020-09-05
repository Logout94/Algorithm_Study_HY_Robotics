//10814

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define testMax 100000
#define wordMax 100
#define numMax 200

using namespace std;

bool comp(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b)
{
	if (a.second.first == b.second.first) return a.first < b.first;
	return a.second.first < b.second.first;
}

int main()
{
	
	int N;
	cin >> N;

	vector<pair<int, pair<int, string>>> Person;

	for (int i = 0; i < N; i++)
	{
		string name;
		int age;
		cin >> age>> name;
		Person.push_back(make_pair(i,make_pair(age, name)));
	}
	sort(Person.begin(), Person.end(), comp);

	string tmp;

	for (int i = 0; i < N; i++)
	{
		cout << Person[i].second.first<<" "<< Person[i].second.second << "\n";
	}
	
		
	return 0;

}