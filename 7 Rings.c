#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    if(n*x>=10000 && n*x<=99999)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

