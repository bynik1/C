#include <stdio.h>

int main()
{
    int d = 2, n;

    scanf("%d", &n);

    while((d * d) <= n){
	    if((n % d) == 0){
	        printf("%d\n", d);
	        n = n / d;
	    }else{
	        d = d + 1;
	    }
    }

    if(n > 1){
	    printf("%d\n", n);
    }

    return 0;
}