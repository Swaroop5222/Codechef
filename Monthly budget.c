#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if(x<30*y)
	    printf("no\n");
	    else
	    printf("yes\n");
	}
	return 0;
}

