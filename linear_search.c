#include<stdio.h>
int search(int num[],int s,int n);
int main()
{
    int n,num[100],s,i,result;
    printf("Enter total number of student\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d number\n",i+1);
        scanf("%d",&num[i]);
    }
    printf("Enter the number you want to search\n");
    scanf("%d",&s);
    result=search(num,s,n);
    if(result>0)
    {
        printf("%d element is found at %d location\n",s,result);
    }
    else{
        printf("%d element is not found\n",s);
    }
    return 0;
    
}
int search(int num[],int s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(num[i]==s)
        {
            return i+1;
        }
    }
    return 0;
}