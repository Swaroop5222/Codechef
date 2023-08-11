#include <stdio.h>

int main(void) {
	// your code goes here
	int i, j, count=0, n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
	    for(j=0; j<n; j++){
	        if(i+j==n)
	        count++;
	    }
	}
	printf("%d\n",count);
	
	return 0;
}

