#include<iostream>
using namespace std;
int main()
{
    int arr[100],temp=0,n,i,j;
    cout<<"Enter the size of arry :"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
    j=n-1;
    while(1)
    {
        while(arr[i]<0 && i<j)
        i++;
        while(arr[j]>0 && i<j)
        j--;
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else
        {
            break;
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
