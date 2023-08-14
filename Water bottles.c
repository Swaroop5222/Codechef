#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x, k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&x,&k);
	    if((n*x)<=k)
	    printf("%d\n",n);
	    else
	    printf("%d\n",k/x);
	}
	return 0;
}

