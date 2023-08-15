#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&b,&x,&y);
	    if(a==b || a>b&&(a-b)<=y || a<b&&(b-a)<=x)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

