#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a, b, c;
	    scanf("%d %d",&a ,&b);
	    if(a<=b){
	        printf("%d\n",a);
	    }
	    else{
	        printf("%d\n",b);
	    }
	   
	}
	return 0;
}

