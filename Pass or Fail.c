#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x, p;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&x,&p);
	    if((3*x)+((n-x)*-1)>=p)
	    printf("Pass\n");
	    else
	    printf("Fail\n");
	}
	return 0;
}

