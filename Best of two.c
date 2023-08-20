#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t, a1, a2, a3, b1, b2, b3;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
	    int large1=fmax(fmax(a1+a2 ,a2+a3),a1+a3);
	    int large2=fmax(fmax(b1+b2 ,b2+b3),b1+b3);
	    if(large1>large2)
	    printf("Alice\n");
	    else if(large2>large1)
	    printf("Bob\n");
	    else
	    printf("Tie\n");
	}
	return 0;
}

