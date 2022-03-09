#include <iostream>
#include <vector>
using namespace std;

#ifndef _KNJIGA_H_
#define _KNJIGA_H_

class Knjiga
{
private:
    string naziv;
    string autor;
    int broj;
    static int id;

public:
    Knjiga();
    Knjiga(string nazivp, string autorp);
    const string& getNaziv() const { return naziv; }
    const string& getAutor() const { return autor; }
    const int& getId() const { return broj; }
    //Knjiga& operator=(const  Knjiga&) = delete;
    friend ostream& operator<<(ostream& it, Knjiga& k);
    Knjiga(const Knjiga& k) { naziv = k.naziv; autor = k.autor; broj = id; id++; }
};

#endif // !_KNJIGA_H_