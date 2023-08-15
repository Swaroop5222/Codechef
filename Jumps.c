#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if(x%y==0)
	    printf("%d\n",x/y);
	    else
	    printf("%d\n",(x/y)+(x%y));
	}
	return 0;
}

