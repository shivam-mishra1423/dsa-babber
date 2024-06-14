#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;

    int mid=(start+end)/2;
    while(start <=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key > arr[mid]){
            start=mid+1;
        }
        else{//key<arr[mid]
            end=mid-1;
        }
        mid = (start+end)/2;//yaha fir se mid ko update kr diye


    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};

    int index = binarysearch(even,6,12);
    cout<<index;
}
