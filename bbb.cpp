#include <iostream>
using namespace std;

int main() {
    double liczba1, liczba2;
    char operator_;

    cout << "Prosty kalkulator\n";
    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;
    cout << "Podaj operator (+, -, *, /): ";
    cin >> operator_;
    cout << "Podaj drugą liczbę: ";
    cin >> liczba2;

    double wynik;

    switch(operator_) {
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            if(liczba2 != 0)
                wynik = liczba1 / liczba2;
            else {
                cout << "Błąd: dzielenie przez zero!\n";
                return 1;
            }
            break;
        default:
            cout << "Nieprawidłowy operator!\n";
            return 1;
    }

    cout << "Wynik: " << wynik << endl;

    return 0;
}