#include<iostream>
using namespace std;
int main(){
    // int arr[3][4];
    // rows->3; 0-2
    // colomn->3; 0-2

    //  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //  cout<<arr[2][3];

    //  int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //  cout<<arr[2][3];

    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,4,7,2}};
    // long and inefficient method 
    // for(int i=0;i<=3;i++){
    //     cout<<arr[0][i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=3;i++){
    //     cout<<arr[1][i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=3;i++){
    //     cout<<arr[2][i]<<" ";
    // }

    //reliable
    for(int i=0;i<=2;i++){ //i is for rows
        for(int j=0;j<=3;j++){ //j is for coloumn
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}