#include<stdio.h>
int search(int num[],int n,int s);
void sort(int *num,int n);
int main()
{
    int n,i,num[100],s,result,j;
    printf("Enter total number of student\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d number\n",i+1);
        scanf("%d",&num[i]);
    };
    sort(num,n);
    printf("Enter the element you want to search\n");
    scanf("%d",&s);
    result=search(num,n,s);
    if(result>0)
    {
        printf("%d element is found at %d location\n",s,result);
    }
    else{
        printf("%d element is not found\n",s);
    }
    return 0;
}
void sort(int *num,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(num+i)>*(num+j))
            {
                t=*(num+i);
                *(num+i)=*(num+j);
                *(num+j)=t;
            }
        }
    }
}
int search(int num[],int n,int s)
{
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(num[m]==s)
        {
            return m+1;
        }
        else if(num[m]>s)
        {
            h=m-1;
        }
        else if(num[m]<s)
        {
            l=m+1;
        }

    }
    return 0;
}