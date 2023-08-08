#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if(y<=x)
	    printf("%d\n",y);
	    else
	    printf("%d\n",x);
	}
	return 0;
}

