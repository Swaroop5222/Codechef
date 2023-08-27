#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if(x/2<=y)
	    printf("%d\n",x/2);
	    else
	    printf("%d\n",y);
	}
	return 0;
}

