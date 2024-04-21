#include<iostream>
using namespace std;
int main(){
    int arr[1e5];
    int size;
    cout<<"ENTER SIZE OF THE ARRAY"<<endl;
    cin>>size;
    cout<<"ENTER ARRAY ELEMENTS"<<endl;
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            continue;
        }else if(arr[i]+1 != arr[arr[i]]){
            int temp = arr[arr[i]];
            arr[arr[i]] = arr[i];
            arr[i] = temp;
        }
    }
 for(int i=0; i<size; i++){
    if(arr[i]<0){
        continue;
        }else if(arr[i]!=i+1){
        cout<<i+1<<endl;
        return 0;
    }
 }
 return 0;
}