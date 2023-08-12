#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    if(a>=b && a>=c)
	    printf("%d\n",a);
	    else if(b>=a && b>=c)
	    printf("%d\n",b);
	    else 
	    printf("%d\n",c);
	    
	}
	return 0;
}

