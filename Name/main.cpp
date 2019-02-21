#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    std::system("chcp 1251");
    string Name;
    cout << "Здравствуйте! Пожалуйста, введите свое имя" << endl;
    cin >> Name  ;
    cout <<"Ваше имя - " <<Name;
}
