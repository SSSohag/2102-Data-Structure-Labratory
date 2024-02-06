#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,o,p; //row and column
    cout<<"Order of First Matrix : ";
    cin>>m>>n;
    int A[m][n];
    cout<<"Order of Second Matrix : ";
    cin>>o>>p;
    int B[o][p];
    int C[m][p];

    if(n!=o){
        cout<<"It is not Posible to make Multiplication."<<endl;
        cout<<"Input First Matrix's column size is equal to second Matrix's row size....";
    }
    else{
        cout<<"Input First Matrix : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>A[i][j];
            }
        }
        cout<<"Input Second Matrix : ";
        cout<<endl;
        for(int i=0;i<o;i++){
            for(int j=0;j<p;j++){
                cin>>B[i][j];
            }
        }
        int sum =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){

                }
            }
        }
        cout<<"Multiplication of Matrix : "<<endl;
        for(int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int s=0;
                for (int k=0;k<m;k++){
                    s+= A[i][k]*B[k][j];
                }
                C[i][j]=s;
            }
        }
        for (int i = 0; i<m; i++){
            cout<<"\t";
            for (int j=0;j<p;j++){
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
}


