//11651

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define testMax 100000
#define numMax 100000
#define numMin -100000

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) //<  오름차순 > 내림차순.
{
	if (a.second == b.second) return a.first < b.first; //return !!
	return a.second < b.second;
}

int main()
{
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/

	int N;
	scanf_s("%d", &N);

	vector<pair<int, int>> point;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		scanf_s("%d %d", &x, &y);
		point.push_back(make_pair(x, y));
	}

	sort(point.begin(), point.end(),compare);
	
	for (int i = 0; i < point.size(); i++)
		printf("%d %d\n", point[i].first, point[i].second);
		
	return 0;

}