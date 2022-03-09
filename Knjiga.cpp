#include "Knjiga.h"

Knjiga::Knjiga(string nazivp, string autorp)
{
    autor = autorp;
    naziv = nazivp;
    broj = id;
    id++;
}

Knjiga::Knjiga()
{
    autor = "";
    naziv = "";
    broj = id;
}

ostream& operator<<(ostream& it, Knjiga& k)
{
    cout << "KNJIGA " << k.getId() << " : " << k.getNaziv() << " - " << k.getAutor() << endl;
    return it;
}