#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, arr[50];
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x<=15)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	
	return 0;
}

