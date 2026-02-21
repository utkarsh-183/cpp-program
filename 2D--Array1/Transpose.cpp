#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the no. of rows : ";
    cin >> m;
    int n;
    cout << "Enter the no. of coloumn : ";
    cin >> n;
    int ar[m][n];
    for(int i=0;i<m;i++){  
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    cout<<endl;
    //original matrix
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }    
    cout<<endl;
    //printing transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ar[j][i]<<" ";
        }
        cout<<endl;
    }
}