#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int nOfTestCase;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--)
	{
		int lengthOfArr;
		scanf("%d", &lengthOfArr);
		int arr[lengthOfArr];

		for(int i = 0; i < lengthOfArr; i++)
			scanf("%d", &arr[i]);

		qsort(arr, lengthOfArr, sizeof(int), cmpfunc);

		int mid = lengthOfArr/2;
		if(lengthOfArr % 2 == 0) mid--;
		
		int increment = 1;
		for(int i = mid; i >= 0; i--)
		{
			printf("%d ", arr[i]);
			
			if(i + increment < lengthOfArr)
			{
				printf("%d ", arr[i + increment]);
				increment+=2;
			}
		}
	}
}

// problem-link -> https://codeforces.com/problemset/problem/1339/B
// time-complexity -> O(nlogn)
