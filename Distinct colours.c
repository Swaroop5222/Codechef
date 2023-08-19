#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int arr[n], large;
	    for(int i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        large=arr[0];
	    }
	        for(int i=0; i<n; i++){
	            if(large<arr[i])
	            large=arr[i];
	    }
	    printf("%d\n",large);
	}
	return 0;
}

