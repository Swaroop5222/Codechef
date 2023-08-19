#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int fact=1;
	    for(int i=1; i<=n; i++){
	        fact=fact*i;
	    }
	printf("%d\n",fact);
	}

	return 0;
}

