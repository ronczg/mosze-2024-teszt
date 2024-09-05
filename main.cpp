#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];  //  N_ELEMENTS használva NELEMENTS helyett
    std::cout << "1-100 ertekek duplazasa" << std::endl;  //  idézőjelek és pontosvessző hozzáadva
    
    for (int i = 0; i < N_ELEMENTS; i++)  //  feltétel és léptetés helyes
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)  //  feltétel módosítva
    {
        std::cout << "Ertek: " << b[i] << std::endl;  //  értékek kiírása és pontosvessző hozzáadva
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;  //  atlag inicializálva

    for (int i = 0; i < N_ELEMENTS; i++)  //  pontosvessző használva
    {
        atlag += b[i];  //  pontosvessző hozzáadva
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;  // Memória felszabadítása

    std::cout << "Szia uram" <<std::endl;

    return 0;
}
