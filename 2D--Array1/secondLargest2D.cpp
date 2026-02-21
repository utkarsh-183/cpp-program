#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no. of coloumn : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    //max
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    int s_max=INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
           if(arr[i][j]!=max&&s_max<arr[i][j])
           s_max=arr[i][j]; 
        }
    }
    cout<<"MAXIMUM ELEMENT IS :"<<max;
    cout<<endl;
    cout<<"SECOND LARGEST ELEMENT IS:"<<s_max;
} 