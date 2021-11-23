#include <stdio.h>
#include <math.h>

int main()
{
    int l, o, g, i, c, d, e, deed, logic, dd;

    for(l = 1; l <10; l++){
	    for(o = 0; o < 10; o++){
	        for(g = 0; g < 10; g++){
		        for(i = 0; i < 10; i++){
		            for(c = 0; c < 10; c++){
			            logic = l*10000 + o*1000 + g*100 + i*10 +c;
			            if ((pow(l + o + g + i + c, 3)) == logic){
			                printf("(%d + %d + %d + %d + %d) ** 3 = %d\n", l, o, g, i, c, logic);
			            }
		            }
		        }
	        }
	    }
    }

    for(l = 1; l <10; l++){
	    for(o = 0; o < 10; o++){
	        for(g = 0; g < 10; g++){
		        for(i = 0; i < 10; i++){
		            for(c = 0; c < 10; c++){
			            logic = l*10000 + o*1000 + g*100 + i*10 +c;
			            if ((pow(c, l)) == logic){
			                printf("%d ** %d = %d\n", c, l, logic);
			            }
		            }
		        }
	        }
	    }
    }

    for(d = 1; d <10; d++){
	    for(e = 0; e < 10; e++){
			deed = d * 1000 + e * 100 + e * 10 +d;
            dd = d * 10 + d;
			if ((pow(dd, e)) == deed){
			    printf("%d ** %d = %d\n", dd, e, deed);    
	        }
	    }
    }



    return 0;
}