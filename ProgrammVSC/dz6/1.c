#include <stdio.h>

int main()
{
    int  sum, d, i = 2;

    while(i < 10000){
	sum = 1;
	d = 2;
	while(d < (i - 1)){
	    if(i % d == 0){
		sum = sum + d;
		d = d + 1;
	    }else{
		d = d + 1;
	    }
	}
	if(i == sum){
	    printf("%d\n", i);
	}
	i = i + 1;
    }


    return 0;
}
