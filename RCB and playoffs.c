#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if((2*z)+x>=y)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

