#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Co chcesz zrobić" << endl;
    cout << endl;
    cout << "1 - Wypelnij ram i swap" << endl;
    cout << endl;
    cout << "2 - Wyjdz";
    cout << endl;
    int wybor;
    cin >> wybor;
    if (wybor == 1) {
        while (true) {
            malloc((size_t)1024);
        }
    }
    
    
}