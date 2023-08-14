//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include<stdio.h>
   
int arr[1000000]={0};

     
int main()
{
	int a,n;
    scanf("%d",&n);
    while(n--)
    {
	    scanf("%d",&a);
        arr[a]++;
    }
    a=0;
    while(a<1000000)
    {
        while(arr[a])
        {
            printf("%d\n",a);
            arr[a]--;
        }
    a++;
    }
return 0;
}



