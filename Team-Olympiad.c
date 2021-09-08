#include <stdio.h>

int main(){
	int nOfChildren, nOfChildrenInEachSkill[3] = {0, 0, 0};
	scanf("%d", &nOfChildren);
	int skill[nOfChildren];
	for(int i = 1; i <= nOfChildren; i++){
		scanf("%d", &skill[i]);
		if(skill[i] == 1){
			nOfChildrenInEachSkill[0] += 1;
		}else if(skill[i] == 2){
			nOfChildrenInEachSkill[1] += 1;
		}else{
			nOfChildrenInEachSkill[2] += 1;
		} 
	}

		
	int min = nOfChildrenInEachSkill[0];
	for(int i = 1; i < 3; i++){
		if(min > nOfChildrenInEachSkill[i]){
			min = nOfChildrenInEachSkill[i];
		}
	}
	
	if(min == 0){
		printf("%d", 0);
	}else{
		printf("%d\n", min);
		for(int i = 0; i < min; i++){
			int choice = 1;
			for(int j = 1; j <= nOfChildren; j++){
				if(skill[j] == choice){
					printf("%d", j);
					skill[j] = 0;
					j = 0;
					if(choice == 3){
						break; 
					}else{
						printf(" ");
					}
					choice += 1;
				}
			}
			printf("\n");
		}
	}
    return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/490/A
//time-complexity -> O(m*n)
