#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d%d",&x,&y);
	    if(y>=0.5*x)
	    printf("yes\n");
	    else
	    printf("no\n");
	    
	}
	return 0;
}

