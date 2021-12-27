#include <stdio.h>

int main()
{
	int numberOfCubes, height = 0, cubesInCurrentLayer, incrementRate;
	cubesInCurrentLayer = incrementRate = 1;
	scanf("%d", &numberOfCubes);

	while(numberOfCubes > 0)
	{
		numberOfCubes -= cubesInCurrentLayer;
		if(numberOfCubes >= 0) height++;
		cubesInCurrentLayer += (++incrementRate); 
	}
	
	printf("%d\n", height);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/492/A
//time-complexity -> O(log n)
