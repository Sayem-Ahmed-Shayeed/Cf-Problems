#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number of element in the array : ");
    scanf("%d",&n);
    int array[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter the element no %d : ",i+1);
        scanf("%d",&array[i]);
    }
    int min=array[0];
    int max=array[0];
       for(int i=1;i<n;i++)
    {
        if(min>array[i])
            min=array[i];
        else
            min=min;
        if(max<array[i])
            max=array[i];
        else
            max=max;
    }
    printf("The greatest number from the array is : %d\n",max);
    printf("The smallest number from the array is : %d\n",min);


}
