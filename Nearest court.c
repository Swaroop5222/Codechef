#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    a=(x+y)/2;
	    if(x>a)
	    printf("%d\n",x-a);
	    else
	    printf("%d\n",y-a);
	}
	return 0;
}

