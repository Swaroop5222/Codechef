#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    if(n==x || x%n==0)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

