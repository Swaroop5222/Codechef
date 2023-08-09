#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d%d",&n,&x);
	    if(n%6==0)
	    printf("%d\n",n/6*x);
	    else
	    printf("%d\n",((n/6)+1)*x);
	}
	return 0;
}

