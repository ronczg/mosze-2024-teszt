#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibas konstans nev, N_ELEMENTS a helyes
    std::cout << '1-100 ertekek duplazasa' //nincs ; a sor végén, és ' helyett "" kell
    for (int i = 0;) // hianyzik a feltetel és a léptetés is
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // mindig hamis feltetel mert az i 0-ról kezd
    {
        std::cout << "Ertek:" // nincs kiírandó érték + nincs ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs inicializálva az atlag
    for (int i = 0; i < N_ELEMENTS, i++) // a vessző helytelen, ; kell
    {
        atlag += b[i] //nincs pontosvessző 
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //memoria nincs felszabadítva
    return 0;
}
