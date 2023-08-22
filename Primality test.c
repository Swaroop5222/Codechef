#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
        int i=0, count=0;
        for(i=1; i<=n; i++){
            if(n%i==0)
            count++;
        }
        if(count==2)
        printf("yes\n");
        else
        printf("no\n");
	}
	return 0;
 }

