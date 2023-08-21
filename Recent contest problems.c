#include <stdio.h>
#include <string.h>


int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n,result,s = 0,s2 = 0;
        scanf("%d",&n);
        for( i =0;i<n;i++)
        {
            int arr[100];
            char name[20];
            scanf("%s",name);
            
            result = strcmp("START38", name);
            
            arr[i] = result;
            if(arr [i] == 0)
                s = s + 1;
            else{
                s2 = s2+1;
            }
        }      
        printf("%d %d\n ",s,s2);
    }
	return 0;
}
