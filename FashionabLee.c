#include <stdio.h>

int main()
{
	int nOfPolygons, side;
	scanf("%d", &nOfPolygons);

	while(nOfPolygons--)
	{
		scanf("%d", &side);
		if(side % 4 == 0) 
		{
			printf("YES\n");
			continue;
		}
		printf("NO\n");
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1369/A
//time-complexity -> O(n) 
