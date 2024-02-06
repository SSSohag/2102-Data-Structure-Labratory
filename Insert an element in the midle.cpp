#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos, val;
    cout<<"Array Size : ";
    cin>>n;
    cout<<"New Index Position : ";
    cin>>pos;
    cout<<"New Value : ";
    cin>>val;
    int a[n];
    int i = n;
    while(i<=pos){
        a[i+1] = a[i];
        i--;
    }
    n+=1;
    a[pos] = val;
    cout<<"Array Size : "<<n<<endl<<"Position's Value : "<<a[pos];
}
