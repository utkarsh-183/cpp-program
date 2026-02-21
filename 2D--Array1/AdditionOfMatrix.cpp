#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{7, 8, 9}, {10, 11, 12}};
    // a
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    // b
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    // b ke andar a add karna hai
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            b[i][j] += a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    // 1st method
    // int res[2][3];
    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<=2;j++){
    //         res[i][j]=a[i][j]+b[i][j];
    //     }
    // }
    //  for(int i=0;i<=1;i++){
    //     for(int j=0;j<=2;j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // 2nd method
    //  for(int i=0;i<=1;i++){
    //      for(int j=0;j<=2;j++){
    //          cout<<a[i][j]+b[i][j]<<" ";
    //      }
    //      cout<<endl;
    //  }
}