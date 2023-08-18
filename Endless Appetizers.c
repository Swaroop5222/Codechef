#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, x, y, r;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&r);
	    a=x+(r/30);
	    if(a%y>1)
	    printf("%d\n",(a/y)+1);
	    else
	    printf("%d\n",(a/y)+(a%y));
	}
	return 0;
}

