#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int row,int col){
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        if(arr[row][col]==target){
            return 1;
        }
    }
    return -1;
}
}
int main()
{
  int arr[3][4];

  for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cin>>arr[row][col];
    }
  }

  //printing the array
/*
  for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col];
    }
     cout<<endl;
  }
*/
int target;
cout<<"enter the searching element "<<endl;
cin>>target;
  if(ispresent(arr,target, 3 ,4)){
    cout<<"element is found " <<endl;
  }
else{
    cout<<"not found" <<endl;
}
}
