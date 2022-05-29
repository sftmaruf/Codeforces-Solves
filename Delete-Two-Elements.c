#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void *b)
{
	return *(int*)a - *(int*)b;
}

void solve(int elements[], long long int sum, int numberOfElement)
{
	 int left = 0, right = numberOfElement - 1;
	 long long int numberOfPairs = 0, incrementFreqInLeft, incrementFreqInRight;
	 incrementFreqInLeft = incrementFreqInRight = 1;

	 if((2*sum)%numberOfElement == 0)
	 {
		 long long int mean = 2*sum / numberOfElement;
		 qsort(elements, numberOfElement, sizeof(int), compare);

		 while(left < right)
		 {
			if(elements[left] == elements[left + 1])
			{
				if(2*elements[left] == mean) numberOfPairs += incrementFreqInLeft;
				left++;
				incrementFreqInLeft++;
			}
			else if(elements[right] == elements[right - 1])
			{
				if(2*elements[right] == mean) numberOfPairs += incrementFreqInRight;
				right--;
				incrementFreqInRight++;
			}
			else
			{
				if(elements[left] + elements[right] <= mean)
				{
					if(elements[left] + elements[right] == mean)
					{
						numberOfPairs += incrementFreqInLeft * incrementFreqInRight;
					}
					left++;
					incrementFreqInLeft = 1; 
				}
				else
				{
					right--;
					incrementFreqInRight = 1;
				}
			}
		 }
	}
	printf("%lld\n", numberOfPairs);
}

int main()
{
	int testCase, numberOfElement;
	scanf("%d", &testCase);

	while(testCase--)
	{
		scanf("%d", &numberOfElement);
		int elements[numberOfElement];
		long long int sum = 0;

		for(int i = 0; i < numberOfElement; i++)
		{
			scanf("%d", &elements[i]);
			sum += elements[i];
		}
		solve(elements, sum, numberOfElement);
	}
	return 0;
}

//problem-linl -> https://codeforces.com/problemset/problem/1598/C
//time-complexity -> O(m * n)
