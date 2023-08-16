#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    int a=((x-1)/10)+1;
	    int b=((y-1)/10)+1;
	    if(x>y)
	    printf("%d\n",a-b);
	    else
	    printf("%d\n",b-a);
	}
	return 0;
}

