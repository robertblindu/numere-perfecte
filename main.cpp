#include <iostream>
using namespace std;
int main() 
{
    int n,d,suma,i;
    cout << "Introdu un numar: ";
    cin >> n;
    for (i=2;i<n;i++)
     {
        int suma = 0;
        for (d=1;d<i;d++)
            if (i%d== 0)
                suma += d;
        if (suma == i)
            cout << i << " este perfect" << endl;
    }
    return 0;
}
