#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if(5*x<(2*y)+x)
	    printf("%d\n",5*x);
	    else
	    printf("%d\n",2*y+x);
	}
	return 0;
}

