#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int a[3],b[3],aScore = 0,bScore = 0;
 
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
 
    for(int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
        aScore++;
        else if(a[i] < b[i])
        bScore++;
    }
    cout << aScore << " " << bScore << endl;
    return 0;
}
