#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    if(n*x%4==0)
	    printf("%d\n",(n*x)/4);
	    else
	    printf("%d\n",((n*x)/4)+1);
	}
	return 0;
}

