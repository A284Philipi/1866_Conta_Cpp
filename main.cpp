#include <iostream>

using namespace std;

int main()
{
    int numero, casos, cont = 0;
    cin >> casos;
    while (cont < casos){
        cin >> numero;
        if (numero%2 == 0){
            cout << "0" <<endl;
        }else{
            cout << "1" <<endl;
        }
        cont++;
    }
    return 0;
}
