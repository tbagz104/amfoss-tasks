#include <iostream>
using namespace std;
string a[];
int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        l=strlen(a);
        
        if (l > 10) {
            cout << a[0] << l - 2 << a[l - 1] << endl;
        }
        else {
            cout << a << endl;
        }
    }
}
return 0;
}
