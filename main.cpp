#include <iostream>
using namespace std;
#include <vector>



int main() {
    srand(time(0));   
    
    int i, j, n, cornici, coppie;

    do {
        cout << "quanti numeri generare ?" << endl;
        cin >> n;
    } while (n < 0);
    int lunghezza[n];

    for (i = 0; i <= n - 1; i++) {
        lunghezza[i] = 4 + rand() % 7;
    }
    coppie = 0;
    for (i = 0; i <= n - 2; i++) {
        j = i + 1;
        while (j <= n - 1 && L[i] == 0) {
            if (L[i] == L[j]) {
                coppie = coppie + 1;
                cout << " al coppia trovata è di" << L[i] << "centimeri" << endl;
                L[i] = 0;
                L[j] = 0;
            }
            j = j + 1;
        }
    }
    cornici = (int) ((double) coppie / 2);
    cout << "le cornici sono" << cornici << endl;
    
}

