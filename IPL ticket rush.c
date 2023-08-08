#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i=1, m, n, result;
	scanf("%d",&t);
	while(i<=t){
	    i++;
	    scanf("%d %d",&m ,&n);
	    if(n>m){
	        printf("0\n");
	    }
	    else{
	         result=m-n;
	    printf("%d\n",result);
	    }
	    
	    
	}
	
	return 0;
}

