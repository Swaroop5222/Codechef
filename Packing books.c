#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if(y%z==0)
	    printf("%d\n",(y/z)*x);
	    else
	    printf("%d\n",((y/z)+1)*x);
	}
	return 0;
}

