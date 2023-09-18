#include <iostream>
constexpr int N_ELEMENTS = 100;

int main()
{
    int b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    for (int i = 1; i<=N_ELEMENTS+1; i++)
    {
        b[i] = i 2;
    }

    for (int i = 1; i<=N_ELEMENTS; i++)
    {
        std::cout << "Ertek:" << b[i] << std::endl;
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
	
	std::cout << "Házi feladat megoldva: khgfkufigzufg által"
    return 0;
}