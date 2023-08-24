#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if((x*y)%z==0){
	        printf("%d %d\n",x*y,z);
	    }
	   else if((y*z)%x==0){
	        printf("%d %d\n",y*z,x);
	    }
	    else if((x*z)%y==0){
	        printf("%d %d\n",x*z,y);
	    }
	    else{
	    printf("-1\n");
	    }
	}
	
	return 0;
}

