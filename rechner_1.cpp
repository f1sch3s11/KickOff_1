#include <iostream>
using namespace std;

// Funktionsdefinitionen
int addiere(int a, int b) {
    return a + b;
}

int subtrahiere(int a, int b) {
    return a - b;
}

int multipliziere(int a, int b) {
    return a * b;
}

double dividiere(int a, int b) {
    if (b == 0) {
        cout << "Fehler: Division durch 0 nicht erlaubt!" << endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int main() {
    int zahl1, zahl2;
    char operation;

    cout << "Einfacher Taschenrechner\n";
    cout << "------------------------\n";
    cout << "Gib zwei ganze Zahlen ein:\n";
    cout << "Zahl 1: ";
    cin >> zahl1;
    cout << "Zahl 2: ";
    cin >> zahl2;

    cout << "Waehle eine Operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Ergebnis: " << addiere(zahl1, zahl2) << endl;
            break;
        case '-':
            cout << "Ergebnis: " << subtrahiere(zahl1, zahl2) << endl;
            break;
        case '*':
            cout << "Ergebnis: " << multipliziere(zahl1, zahl2) << endl;
            break;
        case '/':
            cout << "Ergebnis: " << dividiere(zahl1, zahl2) << endl;
            break;
        default:
            cout << "Ungueltige Operation!" << endl;
    }

    return 0;
}
