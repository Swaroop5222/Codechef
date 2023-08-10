#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    if(n<=x)
	    printf("0\n");
	    if(n>x && (n-x)%4==0)
	    printf("%d\n",(n-x)/4);
	    else if(n>x && (n-x)%4!=0)
	    printf("%d\n",((n-x)/4)+1);
	}
	return 0;
}

