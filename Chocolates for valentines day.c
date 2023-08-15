#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if(x<y)
	    printf("0\n");
	    else
	    printf("%d\n",x/y);
	}
	return 0;
}

