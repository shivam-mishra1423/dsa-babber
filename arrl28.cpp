#include<iostream>
using namespace std;
int main()
{
    /*
    int arr[10]={1,2,3,4};

    cout<<" address of first memory " <<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"addreaa of first index " <<&arr[0]<<endl;

    cout<<"4th  "<<*arr <<endl;
    cout<<"5th  "<<*arr+1 <<endl;
    cout<<"6th  "<<*(arr+1) <<endl;
    cout<<"7th  "<<(*arr)+1 <<endl;
    cout<<"8th  "<<arr[2] <<endl;
    cout<<"9th  "<<*(arr+2) <<endl;

    int i=3;
    cout<<i[arr]<<endl;
    cout<<*(i +arr);
    */
    /*
    int temp[10]={1,2,3};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;


    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    */

    /*
    int a[20]={1,2,3,5};
    cout<<&a[0] <<endl;
    //cout<<&a<<endl;
    //cout<<a<<endl;
cout<<endl;
    int *p=&a[0];
    //cout<<p<<endl;
    //cout<<*p<<endl;
    cout<<&p<<endl;
*/
int arr[10];

//error
 //arr=arr+1;

 int *ptr = &arr[0];
  cout<<ptr<<endl;
 ptr = ptr + 1;
 cout<<ptr<<endl;




}
