#include <stdio.h>

int main(void) {
	// your code goes here
	int t, r1, r2, r3;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&r1,&r2,&r3);
	    if(r1>r2+r3 || r2>r1+r3 || r3>r1+r2)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

