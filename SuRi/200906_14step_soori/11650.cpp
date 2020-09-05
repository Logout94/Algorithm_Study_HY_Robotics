//11650
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define testMax 100000
#define numMax 100000
#define numMin -100000

using namespace std;



int main()
{
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/

	int N;
	scanf("%d", &N);

	vector<pair<int, int>> point;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		point.push_back(make_pair(x, y));
	}

	sort(point.begin(), point.end());
	
	for (int i = 0; i < point.size(); i++)
		printf("%d %d\n", point[i].first, point[i].second);
		
	return 0;

}