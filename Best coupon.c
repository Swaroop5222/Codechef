#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(0.1*x>100)
	    printf("%.f\n",0.1*x);
	    else
	    printf("100\n");
	}
	return 0;
}

