#include<iostream>
using namespace std;
int main(){
    int tickets,coins=0,games=0;
    cout<<"ENTER NUMBER OF TICKETS "<<endl;
    cin>>tickets;
    for(int i=0; i<tickets; i++){
      coins = coins + 25;
      games++;
      if(coins == 100){
        tickets++;
        coins = 0;
      }
    }
    cout<<games<<endl;
    return 0;
}