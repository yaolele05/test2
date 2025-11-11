#include <stdio.h>
int seek(int a[],int n,int num)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]==num)
        return 1;
        else if(a[mid]<num)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n]; 
    int num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    scanf(" %d",&num);
    int result=seek(arr,n,num);
    printf("%d",result);
    return 0;
}