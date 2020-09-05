//10989
#include <iostream>
#include <algorithm>
#include <string>
#define RangeMax 10000000
#define numMax 10000+1

using namespace std;

int main()
{
	

	int Count[numMax];
	fill_n(Count, numMax, 0);

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int tmp;
		scanf("%d", &tmp);

		Count[tmp-1]++;

	}

	for (int i = 0; i < numMax; i++)
	{
		if (Count[i] != 0)
		{
			for (int j = 0; j < Count[i]; j++)
			{
				printf("%d\n", i + 1);
				
			}
		}
	}

}