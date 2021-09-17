#include <stdio.h>

int main(){
	 int testCases, minOrange, minCandy;
    	 scanf("%d", &testCases);
	 int nOfGifts;

	 while(testCases--){
		scanf("%d", &nOfGifts);
		long long int nOfCandy[nOfGifts], nOfOrange[nOfGifts],
	       		sumCandy = 0, sumOrange = 0, minMoves = 0;;
		
		for(int i = 0; i < nOfGifts; i++){
			scanf("%lld", &nOfCandy[i]);
		}

		for(int i = 0; i < nOfGifts; i++){
			scanf("%lld", &nOfOrange[i]);
		}

		minCandy = nOfCandy[0];
		minOrange = nOfOrange[0];
		for(int i = 0; i < nOfGifts; i++){
			if(nOfCandy[i] < minCandy){
				minCandy = nOfCandy[i];
			}	

			if(nOfOrange[i] < minOrange){
				minOrange = nOfOrange[i];
			}
		}

		for(int i = 0; i < nOfGifts; i++){
			if(nOfCandy[i] > minCandy && nOfOrange[i] > minOrange ){
				if(nOfCandy[i] - minCandy > nOfOrange[i] - minOrange){
					minMoves += nOfCandy[i] - minCandy;
				}else{
					minMoves += nOfOrange[i] - minOrange;
				}
			}

			if(nOfCandy[i] > minCandy && nOfOrange[i] <= minOrange){
				minMoves += nOfCandy[i] - minCandy;
			}	

			if(nOfCandy[i] <= minCandy && nOfOrange[i] > minOrange){
				minMoves += nOfOrange[i] - minOrange;
			}
		}
		printf("%lld\n", minMoves);
	 }
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1399/B
//time-complexity -> O(m * n) 
