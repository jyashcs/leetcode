#include<iostream>
using namespace std;
int firstandsecindex(int arr[],int size,int key);
int main(){
    int arr[]={1,2,3,3,5,6,6};
    int key;
    cout<<"WHICH ELEMENT TO BE FIND"<<endl;
    cin>>key;
    int size=sizeof(arr)/sizeof(arr[0])-1;
    int answer = firstandsecindex(arr,size,key);
    if(answer==-1)
    cout<<"-1,-1"<<endl;
    else if(arr[answer]==arr[answer-1])
    cout<<answer<<","<<answer-1;
    else if(arr[answer]==arr[answer+1])
    cout<<answer<<","<<answer+1;

}

int firstandsecindex(int arr[],int size,int key){
    int start=0,end=size;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]==key)
           return mid;
           if(arr[mid]>key)
           end=mid-1;
           if(arr[mid]<key)
           start=mid+1;
    }
    return -1;
}