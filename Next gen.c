#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&b,&x,&y);
	    if(x*y>=a*b)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

