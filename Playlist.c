#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, count=0, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    printf("%d\n",(n/x)/3); 
	}
	return 0;
}

