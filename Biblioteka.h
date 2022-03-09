#include "Knjiga.h"

#ifndef _BIBLIOTEKA_H_
#define _BIBLIOTEKA_H_

class Biblioteka
{
    std::string naziv;
    int trenBrKnj = 0;
    int MaxBrKnj;
    Knjiga* nizKnjiga;

public:
    const std::string& getNaziv() const { return naziv; }
    const int& getTrenBrKnj() const { return trenBrKnj; }
    const int& getMaxBrKnj() const { return MaxBrKnj; }
    Biblioteka(std::string nazivp, int MaxBrKnjp);
    friend Biblioteka& operator+=(Biblioteka& b, Knjiga& k);
    friend ostream& operator<<(ostream& it, Biblioteka& b);
    const Knjiga& getKnjiga(int id) const { return nizKnjiga[id]; }
    ~Biblioteka() { delete[]nizKnjiga; }
};

#endif // !_BIBLIOTEKA_H_