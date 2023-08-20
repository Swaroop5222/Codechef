#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, s, d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int i=0, count=0,  arr1[n], arr2[n];
	    for(i=0; i<n; i++){
	        scanf("%d",&arr1[i]);
	    }
	    for(i=0; i<n; i++){
	        scanf("%d",&arr2[i]);
	    }
	    for(i=0; i<n; i++){
	        if(arr1[i]==arr2[i])
	        count++;
	        }
	    printf("%d\n",count);
	}
	return 0;
}

