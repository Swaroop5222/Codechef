#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int i=0, count=0,  arr[n];
	    for(i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	        if(arr[i]==1)
	        count++;
	    }
	    if(n%2!=0)
	    printf("-1\n");
	    else
	    printf("%d\n",abs(count-n/2));
	}
	return 0;
}

