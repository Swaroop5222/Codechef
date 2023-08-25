#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    if(a<b && a<c)
	    printf("Draw\n");
	    else if(b<a && b<c)
	    printf("Bob\n");
	    else
	    printf("Alice\n");
	}
	return 0;
}

