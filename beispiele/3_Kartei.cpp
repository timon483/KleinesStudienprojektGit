#include <iostream>
#include <stdlib.h> 

using namespace std;


class kartei
{
private:
  string vorname;
  string nachname;
  string strasse;
  int hausnummer;
  int plz;
  string ort;
  int tag;
  int monat;
  int jahr;

public:

  kartei();
  kartei(string vn, string nn, string str, int hn, int z, string o, int t, int m, int j);
  ~kartei();
  
  void name_aendern();
  void adresse_aendern();
  void geburtstag_aendern();
  void daten_ausgeben();
  
};

 

int main() 
{
  kartei Person1;
  Person1.name_aendern();
  Person1.adresse_aendern();
  Person1.geburtstag_aendern();
  Person1.daten_ausgeben();
  
  kartei Person2("Max", "Mustermann", "Strasse", 1, 54290, "Trier", 1, 1, 1999);
  Person2.daten_ausgeben();
}



kartei::kartei()
{
}

kartei::kartei(string vn, string nn, string str, int hn, int z, string o, int t, int m, int j)
{
  vorname = vn;;
  nachname = nn;
  strasse = str;
  hausnummer = hn;
  plz = z;
  ort = o;
  tag = t;
  monat = m;
  jahr = j;
}

kartei::~kartei()
{
}

void kartei::name_aendern()
{
  cout << "Bitte Vor und Nachname eingeben: ";
  cin >> vorname >> nachname;
  cout << endl;
}

void kartei::adresse_aendern()
{
  cout << "Bitte Strasse und Hausnummer eingeben: ";
  cin >> strasse >> hausnummer;
  cout << endl;
  cout << "Bitte PLZ und Wohnort eingeben: ";
  cin >> plz >> ort;
  cout << endl;
}

void kartei::geburtstag_aendern()
{
  string geburtstag;
  cout << "Bitte Geburtstag tt.mm.yyyy eingeben:";
  cin >> geburtstag;
  tag = atoi(geburtstag.substr(0,2).c_str());
  monat = atoi(geburtstag.substr(3,2).c_str());
  jahr = atoi(geburtstag.substr(6,4).c_str());
  cout << endl;  
}

void kartei::daten_ausgeben()
{
  cout << vorname << " " << nachname << endl;
  cout << strasse << " " << hausnummer << endl;
  cout << plz << " " << ort << endl;
  cout << "geboren am " << tag << "." << monat << "." << jahr << endl;
  cout << endl;
}
  