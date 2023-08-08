#include <stdio.h>

int main(void) {
	// your code goes here
	int t, w, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&w,&x,&y,&z);
	    if(x<y*z+w)
	    printf("overflow\n");
	    else if(x==y*z+w)
	    printf("filled\n");
	    else 
	    printf("unfilled\n");
	  
	}
	
	return 0;
}

