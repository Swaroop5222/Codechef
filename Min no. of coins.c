#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x%10==0)
	    printf("%d\n",x/10);
	    else if(x%10!=0 && x%5==0)
	    printf("%d\n",(x/10)+1);
	    else
	    printf("-1\n");
	}
	return 0;
}

