#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    
	    if((y-x)%8==0)
	    printf("%d\n",(y-x)/8);
	    else
	    printf("%d\n",((y-x)/8)+1);
	    
	}
	return 0;
}

