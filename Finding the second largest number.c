#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    if(b>a && b<c || b>c && b<a)
	    printf("%d\n",b);
	    else if(a>b && a<c || a>c && a<b)
	    printf("%d\n",a);
	    else
	    printf("%d\n",c);
	}
	return 0;
}

