#include "Knjiga.h"
#include "Biblioteka.h"


int Knjiga::id = 1;

int main()
{
    Knjiga k1 = Knjiga("Peka", "Meka");
    Knjiga k2 = Knjiga("Peca", "Meca");
    Knjiga k3(k2);
    cout << k1;
    cout << k2;
    cout << k3;

    Biblioteka b1("Bibi", 10);
    Biblioteka b2("Babi", 5);
    b1 += k1;
    b1 += k3;
    b2 += k2;
    cout << b1;
    cout << b2;
    Knjiga k;
    k = b1.getKnjiga(0);
    Knjiga kk;
    kk = b2.getKnjiga(0);
    cout << k;
    cout << kk;
}