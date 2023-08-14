#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x%3==0)
	    printf("Normal\n");
	    else if(x%3==1)
	    printf("Huge\n");
	    else
	    printf("Small\n");
	}
	return 0;
}

