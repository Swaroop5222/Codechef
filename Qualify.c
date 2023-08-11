#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, a, b;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d%d%d",&x,&a,&b);
	    if((a*1)+(b*2)>=x)
	    printf("Qualify\n");
	    else
	    printf("Not qualify\n");
	}
	return 0;
}

