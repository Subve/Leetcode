// RomanToInt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdio.h>

class Solution {
public:
    
    int romanToInt(std::string s) {
        int maxPast = 3;
        int size = (int)s.length();
        int answ=0;
        int tmpansw=0;
        int i = 0;
        while (i <= size)
        {
            if (s[s.length()-1] == )
            {
                tmpansw = 1;
            }
            i++;
        } 
        answ = tmpansw;
        return answ;
    } 

};

int main()
{
    Solution sol;
    std::cout<<sol.romanToInt("I");
    std::cout << "Hello World!\n";
    
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
