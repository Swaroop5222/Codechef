#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&x,&y,&a,&b);
	    int count =0;
	    if(x!=a && x!=b){
	        count++;
	    }
	    if(y!=a && y!=b){
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;

	}

