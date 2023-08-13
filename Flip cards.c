#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    if(x>(n-x))
	    printf("%d\n",n-x);
	    else 
	    printf("%d\n",x);
	}
	return 0;
}

