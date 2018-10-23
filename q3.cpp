#include<iostream>
using namespace std;
int klarge(float arr[],int size,int k)
{
    int temp;
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
               
            }
        }
    }
    return arr[size-k];
}

int ksmall(float arr[],int size,int k)
{
    int temp;
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
               
            }
        }
    }
    return arr[size-k];
}

int main()
{
    float a;
    int i,size,k;
    i=0;
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter the value of k: ";
    cin>>k;
    float arr[size];
    while(i<size)
    {
        cout<<"Enter value "<<i+1<<": ";
        cin>>a;
        arr[i]=a;
        i++;
    }
    cout<<"The "<<k<<"th largest element of the array is: "<<klarge(arr,size,k)<<endl;
    cout<<"The "<<k<<"th smallest element of the array is: "<<ksmall(arr,size,k)<<endl;
    return 0;
    
}
