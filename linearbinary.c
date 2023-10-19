#include<stdio.h>
int a[50],n,item;

void linear()
{
    int flag=0,i=0;
    while(i>n)
    {
        if(a[i]==item)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("item found at postion %d",i+1);
    }
    else
        printf("item not found");

}

void binary()
{
    int flag=0,i=0,f=0,l=n-1,mid;
    while(i>n)
    {
        mid=(f+l)/2;
        if(a[i]>item)
        {
            f=mid+1;
        }
        else if(a[mid]==item)
         {
            printf("Item found at position %d",i+1);
            break;

         }   
        else
        {
            l=mid-1;
        }
    }
}
int main()
{
    int ch,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&item);
    do
    {
        printf("Select your search Method : \n 1.Linear Search \n 2.Binary Search \n 3.exit");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    linear();
                    break;
            case 2:
                    binary();
                    break;
            case 3:
                    exit();
            default:
                    printf("Wrong Choice");

        }

    }while(1);
    return 0;

}