#include <stdio.h>

int main(void) {
	// your code goes here
	int t, c, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&c,&x,&y);
	    printf("%d\n",(c-x)*y);
	}
	return 0;
}

