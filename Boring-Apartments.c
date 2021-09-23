#include <stdio.h>

int main(){
	int testCases, apartmentNumber, reminder, length, totalPressed = 0;
	scanf("%d", &testCases); 

	while(testCases--){
		scanf("%d", &apartmentNumber);
		reminder = apartmentNumber % 10;
		length = snprintf(NULL, 0, "%d", apartmentNumber);

		if(length == 1 && reminder == 1){
			totalPressed = 1;
		}else if(length == 4){
			totalPressed = reminder * 10;	
		}else if(length == 3){
			totalPressed = (reminder - 1) * 10 + (length * 2);
		}else if(length == 2){
			totalPressed = (reminder - 1) * 10 + (length + 1);
		}else{
			totalPressed = ((reminder - 1 ) * 10) + 1;
		}
		printf("%d\n", totalPressed);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1433/A
//time-complexity -> O(n)
