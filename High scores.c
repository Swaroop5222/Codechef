#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, a, b, c, d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	        scanf("%d%d%d%d",&a,&b,&c,&d);
	        if(a>=b && a>=c && a>=d)
	        printf("%d\n",a);
	        else if(b>=a && b>=c && b>=d)
	        printf("%d\n",b);
	        else if(c>=a && c>=b && c>=d)
	        printf("%d\n",c);
	        else
	        printf("%d\n",d);
	}
	return 0;
}

