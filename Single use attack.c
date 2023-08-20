#include <stdio.h>

int main(void) {
	// your code goes here
	int t, h, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&h,&x,&y);
	    if((h-y)%x==0)
	    printf("%d\n",(h-y)/x+1);
	    else
	    printf("%d\n",((h-y)/x)+2);
	}
	return 0;
}

