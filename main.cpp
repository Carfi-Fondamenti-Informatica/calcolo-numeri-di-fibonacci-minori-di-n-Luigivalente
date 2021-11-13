#include <iostream>
using namespace std;

int main() {
    int n=0,n1=0,n2=1;
    int risultato;
    cin >> n;
    cout << "1" <<endl;
    for(int i=0; i<=n-1; i++){
        risultato=n1+n2;
        n1=n2;
        n2=risultato;
        cout << risultato <<endl;
    }


    return 0;
}
