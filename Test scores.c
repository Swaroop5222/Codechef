#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&x,&y);
	    if(y%x==0)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

