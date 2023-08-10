#include <stdio.h>

int main(void) {
	// your code goes here
	int t, b1, b2, b3;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&b1,&b2,&b3);
	    if(b1==0&&b2==0 || b2==0&&b3==0 || b3==0&&b1==0 || b1==0&&b2==0&&b3==0)
	    printf("Water filling time\n");
	    else
	    printf("Not now\n");
	}
	return 0;
}

