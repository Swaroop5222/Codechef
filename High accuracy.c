#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    a=(x/3)+1;
	    if(x%3==0)
	    printf("%d\n",x%3);
	    else
	    printf("%d\n",(a*3)-x);
	}
	return 0;
}

