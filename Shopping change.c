#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x<=100)
	    printf("%d\n",100-x);
	}
	return 0;
}

