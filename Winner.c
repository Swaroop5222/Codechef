#include <stdio.h>

int main(void) {
	// your code goes here
	int t, pa, pb, qa, qb, p, q;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&pa,&pb,&qa,&qb);
	    if(pa>=pb)
	    p=pa;
	    else
	    p=pb;
	    if(qa>=qb)
	    q=qa;
	    else
	    q=qb;
	    if(p<q)
	    printf("P\n");
	    else if(q<p)
	    printf("Q\n");
	    else
	    printf("TIE\n");
	    
	    
	}
	return 0;
}

