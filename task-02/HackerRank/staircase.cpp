#include <bits/stdc++.h>

using namespace std;

int main()
{

int i,n,j,z;
cin>>n;

for(i=1;i<=n;i++)
{
    for(z=1;z<=n-i;z++)
    {
    cout<<" ";
    }

    for(j=1;j<=i;j++){
    cout<<"#";
    }
    cout<<" "<<endl;
}
return 0;
}
