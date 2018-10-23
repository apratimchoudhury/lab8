#include <iostream>
using namespace std;

int add(int arr[],int size)
{
    int sum=0;
    for(int j=0;j<size;j++)
    {
        sum=sum+arr[j];
    }
    return sum;
}

int main()
{
    int size,i;
    i=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    while(i<size)
    {
        int p;
        cout<<"Enter value: ";
        cin>>p;
        arr[i]=p;
        i++;
    }
    
     cout<<"The sum of the elements of the array is: "<<add(arr,size)<<endl;
    return 0;
   
    
}
