#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    int i=0, c=0, a[n], b[n];
	    for(i=0; i<n; i++){
	        scanf("%d",&a[i]);}
	        for(i=0; i<n; i++){
	        scanf("%d",&b[i]);}
	        for(i=0; i<n; i++){
	        if(a[i]>=x)
	        c=c+b[i];
	    }
	    printf("%d\n",c);
	}
	return 0;
}

