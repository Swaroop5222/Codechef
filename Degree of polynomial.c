#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, i=0;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int  large=0, arr[n];
	    for(i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        if(arr[i]!=0)
	        large=i;
	    }
	    printf("%d\n",large);
	}
	return 0;
}

