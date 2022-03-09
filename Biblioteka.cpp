#include "Biblioteka.h"

Biblioteka::Biblioteka(std::string nazivp, int MaxBrKnjp)
{
    naziv = nazivp;
    MaxBrKnj = MaxBrKnjp;
    nizKnjiga = new Knjiga[MaxBrKnj];
}

Biblioteka& operator+=(Biblioteka& b, Knjiga& k)
{
    Knjiga kn = Knjiga(k);
    Knjiga* ptr = &kn;
    b.nizKnjiga[b.trenBrKnj] = (*ptr);
    b.trenBrKnj++;
    return b;
}


ostream& operator<<(ostream& it, Biblioteka& b)
{
    std::cout << "BIBLIOTEKA " << b.naziv << " " << b.trenBrKnj << " / " << b.MaxBrKnj << endl;
    for (int i = 0; i < b.trenBrKnj; i++)
    {
        std::cout << b.nizKnjiga[i] << std::endl;
    }
    return it;
}