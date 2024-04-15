#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER ARRAY SIZE"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[n];
    for (int i=0 i<n; i++){
        if(arr[i] /2 != 0){
            arr[i]=-arr[i];
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}