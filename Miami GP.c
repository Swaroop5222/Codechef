#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	float finish;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    finish=1.07*x;
	    if(y<=finish)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

