#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, x1, x2, y1, y2;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	    a=abs(x1-x2);
	    b=abs(y1-y2);
	    if(a>b)
	    printf("%d\n",a);
	    else
	    printf("%d\n",b);
	}
	return 0;
}

