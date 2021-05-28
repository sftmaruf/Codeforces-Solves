#include<stdio.h>

int main(){
    long long int n,m,a,result,result1;

    scanf("%lld %lld %lld",&n,&m,&a);

    result = m/a;
    result1 = n/a;

    if(m%a != 0){
        result += 1;
    }

    if(n%a != 0){
        result1 += 1;
    }

    result = result * result1;

    printf("%lld ",result);

    return 0;
}
