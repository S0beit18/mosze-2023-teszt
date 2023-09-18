#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; 							//NELEMENTS --> hiányzik egy "_"
    std::cout << '1-100 ertekek duplazasa' 					//";" hiányzik, std::endl, kettős aposztóf
    for (int i = 0;) 										//nem teljes a ciklus, és ne 0-99ig írja ki, hanem 1-100ig
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)									//ciklus hibás "i<=N_ELEMENTS"
    {
        std::cout << "Ertek:" 								//hiányzik az érték --> "b[i]"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)				 	// "," helyett ";" a ciklusban, "i<=N_ELEMENTS"
    {
        atlag += b[i] 										//hiányzik a ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
