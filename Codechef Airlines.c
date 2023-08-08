#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if(x*10>=y)
	    printf("%d\n",y*z);
	    else
	    printf("%d\n",z*10*x);
	}
	return 0;
}

