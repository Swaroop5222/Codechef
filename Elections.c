#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n,  age, x;
	scanf("%d",&t);
	while(t--){
	    int count=0;
	    scanf("%d %d",&n,&x);
	    for(int i=0; i<n; i++){
	        scanf("%d",&age);
	        if(age>=x)
	        count++;
	       	
	    }
	    printf("%d\n", count);
	    
	}
	


	return 0;
}

