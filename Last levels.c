#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if(x<=3)
	    printf("%d\n",x*y);
	    else if(x%3==0)
	    printf("%d\n",((x/3)-1)*z+(x*y));
	    else
	    printf("%d\n",(x*y)+(x/3)*z);
	}
	return 0;
}

