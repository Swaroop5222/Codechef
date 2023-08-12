#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n<=10)
	    printf("Lower Double\n");
	    if(n>10 && n<=15)
	    printf("Lower Single\n");
	    if(n>15 && n<=25)
	    printf("Upper Double\n");
	    if(n>25 && n<=30)
	    printf("Upper Single\n");
	    
	    
	}
	return 0;
}

