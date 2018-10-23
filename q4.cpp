include<iostream>
using namespace std;

float maximum(float arr[],int size)
{
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    return temp;
}


float minimum(float arr[],int size)
{
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        if(temp>arr[i])
        {
            temp=arr[i];
        }
    }
    return temp;
}
int main()
{
    float a,b;
    int i,j,size1,size2;
    i=0;j=0;
    cout<<"Enter size of the first array: ";
    cin>>size1;
    float arr1[size1];
    while(i<size1)
    {
        cout<<"Enter value "<<i+1<<": ";
        cin>>a;
        arr1[i]=a;
        i++;
    }
    cout<<"Enter the size of second array: ";
    cin>>size2;
    float arr2[size2];
    while(j<size2)
    {
        cout<<"Enter value "<<j+1<<": ";
        cin>>b;
        arr2[j]=b;
        j++;
    }
    float arr[size1+size2];
    for(int k=0;k<size1;k++)
    {
        arr[k]=arr1[k];
    }
    
    for(int l=size1;l<size1+size2;l++)
    {
        arr[l]=arr2[l-size1];
    }
    
    cout<<"The largest element of the combined array is: "<<maximum(arr,size1+size2)<<endl;
    cout<<"The smallest element of the combined array is: "<<minimum(arr,size1+size2)<<endl;
    return 0;
}
