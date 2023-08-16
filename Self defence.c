#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int count=0, age[n];
	    for(i=0; i<n; i++){
	        scanf("%d",&age[i]);
	        if(age[i]>=10 && age[i]<=60)
            count++;
	    }
            printf("%d\n",count);       
	}
	return 0;
}

