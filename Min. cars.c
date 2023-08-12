#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n%4==0)
	    printf("%d\n",n/4);
	    else
	    printf("%d\n",(n/4)+1);
	}
	return 0;
}

