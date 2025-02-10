#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BazaDanych;

class Osoba {
    friend void wyswietlImionaNaLitere(const BazaDanych&, char);

public:
    Osoba(string imie, string nazwisko) : imie(imie), nazwisko(nazwisko) {}
    
private:
    string imie;
    string nazwisko;
};

class BazaDanych {
public:
    void dodajOsobe(const Osoba& osoba) {
        osoby.push_back(osoba);
    }

    friend void wyswietlImionaNaLitere(const BazaDanych&, char);

private:
    vector<Osoba> osoby;
};

void wyswietlImionaNaLitere(const BazaDanych& baza, char litera) {
    cout << "Imiona zaczynajace sie na litere " << litera << ":\n";
    for (const auto& osoba : baza.osoby) {
        if (osoba.nazwisko[0] == litera) {
            cout << osoba.imie << " " << osoba.nazwisko << endl;
        }
    }
}

int main() {
    BazaDanych baza;
    bool exit_ = true;
    char answer;
    string imie, nazwisko;
    do{
        cout<<"Wpisz imie: ";
        cin>>imie;
        cout<<endl;
        cout<<"Wpisz nazwisko: ";
        cin>>nazwisko;
        cout<<endl;
        baza.dodajOsobe(Osoba(imie, nazwisko));
        cout<<"Czy skonczyles wprowadzac y/n: ";
        cin>>answer;
        cout<<endl;
        if(answer == 'y'){
            exit_ = false;
        }
    }while(exit_);


    char litera;
    cout << "Podaj litere, na ktora maja zaczynac sie nazwiska: ";
    cin >> litera;

    wyswietlImionaNaLitere(baza, litera);

    return 0;
}
