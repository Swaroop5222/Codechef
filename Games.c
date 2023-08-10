#include <stdio.h>

int main(void) {
	// your code goes here
	int t, r1, r2, r3, r4;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&r1,&r2,&r3,&r4);
	    if(r1==0 && r2==0 && r3==0 && r4==0)
	    printf("in\n");
	    else
	    printf("out\n");
	}
	return 0;
}

