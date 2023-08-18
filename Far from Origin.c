#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t,x1, x2, y1, y2;
	double a, b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	    a=sqrt((x1*x1)+(y1*y1));
	    b=sqrt((x2*x2)+(y2*y2));
	    if(a>b)
	    printf("Alex\n");
	    else if(a<b)
	    printf("Bob\n");
	    else
	    printf("Equal\n");
	}
	return 0;
}

