#include <stdio.h>

int main()
{
	int numberOfTestCase;
	scanf("%d", &numberOfTestCase);

	while(numberOfTestCase--)
	{
		int numberOfElements;
		scanf("%d", &numberOfElements);
		int elements[numberOfElements];
		for(int i = 0; i < numberOfElements; i++)
		{
			scanf("%d", &elements[i]);
		}

		long long sum = 0;
		int max = 0, min = 0, cursor = 0;

		for(int i = 0; i < numberOfElements;)
		{
			if(elements[i] > 0)
			{
				while(elements[cursor] > 0 && cursor != numberOfElements)
				{
					if(elements[cursor] > max) max = elements[cursor];
					cursor++;
					if(cursor == numberOfElements) break;
				}
				sum += max;
				max = 0;
				i = cursor;
			}
			else 
			{
				if(min == 0) min = elements[i];
				while(elements[cursor] < 0 && cursor != numberOfElements)
				{
					if(elements[cursor] > min) min = elements[cursor];
					cursor++;
					if(cursor == numberOfElements) break;
				}
				sum += min;
				min = 0;
				i = cursor;
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}
