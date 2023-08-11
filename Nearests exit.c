#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x<=50)
	    printf("Left\n");
	    else
	    printf("Right\n");
	}
	return 0;
}

