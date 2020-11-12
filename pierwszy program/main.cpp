#include <iostream>     //standardowa biblioteka, która umożliwia zastosowanie funkcji cout

using namespace std;    //taki zapis pozwala na skrocenie zapisu std::cout do samego cout

int main()              //funkcja main, ktora jest zawsze odpalana w pierwszej kolejnosci
{
                        //cout to skrot od 'console output', funkcja umozliwia wyswietlanie napisow w konsoli
    cout << "Witamy \nna pokladzie";                // \n przenosi dalszy tekst do nowej linii (new line)
    cout << "Lecimy na " << "wysokosci 3500 stop";  //mozliwe jest laczenie fragmentow tekstu w taki sposob
    cout << " To dalej jest ";                      //musisz scisle zdefiniowac nowa linie poprzez znak \n w tekscie lub
    cout << "ta sama linia" << endl;                //funkcje endl (end line) poza tekstem
    cout << "Nowa linia";
}
