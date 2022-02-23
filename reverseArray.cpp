#include<iostream>
using namespace std;
int main(){
    int size;
   // cout<<"Enter Size of array"<<endl;
    cin>>size;
    int A[size];
   // cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    for(int i=1;i<=size;i++){
        cout<<A[size-i]<<" ";
    }
    return 0;
}