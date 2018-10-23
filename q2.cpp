#include <iostream>
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

float mean(float arr[],int size)
{
    float sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    float avg=sum/size;
    return avg;
}

float median(float arr[],int size)
{
    int temp;
    float medn;
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
    if(size%2!=0)
    {
        medn=arr[((size+1)/2)-1];
        return medn;
    }
    else
        medn=(arr[(size/2)-1]+arr[size/2])/2;
        return medn;
   
   
   
}

int mode(float arr[],int size)
{
    int count[size];
    for(int h=0;h<size;h++)
    {
        count[h]=0;
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;i!=j&&j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count[i]++;
            }
        }
    }
    int temp=0;
    for(int k=1;k<size;k++)
    {
        if(count[temp]<count[k])
        {
            temp=k;
        }
    }
    return arr[temp];
}

int main()
{
    float a;
    int i,size;
    i=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    float arr[size];
    while(i<size)
    {
        cout<<"Enter value "<<i+1<<": ";
        cin>>a;
        arr[i]=a;
        i++;
    }
    cout<<"The maximum value in the array is: "<<maximum(arr,size)<<endl;
    cout<<"The minimum value in the array is: "<<minimum(arr,size)<<endl;
    cout<<"The mean of the values of the array is: "<<mean(arr,size)<<endl;
    cout<<"The median of the array is: "<<median(arr,size)<<endl;
    cout<<"The mode of the given array is: "<<mode(arr,size)<<endl;
    return 0;
}
