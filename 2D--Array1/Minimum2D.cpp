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
    //minimum
    int min=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<=n-1;j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    int s_min=INT_MAX;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
           if(arr[i][j]!=min&&s_min>arr[i][j])
           s_min=arr[i][j]; 
        }
    }
    cout<<"MINIMUM ELEMENT IS :"<<min;
    cout<<endl;
    cout<<"SECOND LEAST ELEMENT IS:"<<s_min;
} 