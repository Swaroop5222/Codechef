#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&b,&c,&x);
	    if((a+b)>=x || (a+c)>=x || (b+c)>=x)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

