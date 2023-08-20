#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, k, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&n,&k,&x,&y);
	    if(x>y)
	    printf("%d\n",(k*x)+((n-k)*y));
	    else
	    printf("%d\n",(k*x)+((n-k)*x));	    
	}
	return 0;
}

