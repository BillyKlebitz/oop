#include <iostream>
#include <locale>
#include <string>
#include <locale.h>
using namespace std;

class Avto
{
public:
string name;
int vel;
int cen;
char b[10];
 Avto(string n, int v, int c)
    {
        name = n; vel = v; cen = c;
    }
void srav(int m, int c)
{
    if(vel>m && cen<=c)
        cout << name << endl;
}

};



int main()
{
    setlocale(LC_ALL, "Rus");
    int m,c;
    cout << "введите желаемую максимальную скорость:" <<endl;
    cin >> m;
    cout << "введите желаемую цену:" <<endl;
    cin >> c;
    Avto lada  = Avto("Lada",100,10000);
    lada.srav(m,c);
    Avto peugeot = Avto("Peugeot",200,50000);
    peugeot.srav(m,c);
     Avto honda = Avto("Honda",150,30000);
    honda.srav(m,c);
    return 0;
}
