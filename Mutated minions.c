#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&k);
	    int i=0, count=0, arr[n];
	    for(i=0; i<n; i++){
	        scanf("%d",&arr[i]);
	    if((arr[i]+k)%7==0)
	    count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

