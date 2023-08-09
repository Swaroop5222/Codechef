#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if(z>=x && z<x+y)
	    printf("1\n");
	    else if(z>=(x+y))
	    printf("2\n");
	    else
	    printf("0\n");
	}
	return 0;
}

