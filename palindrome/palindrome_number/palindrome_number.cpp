// palindrome_number.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdio.h>
#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        int last = 0;
        std::vector<int> vec;
        int b = x;
        while (b > 9)
        {

            last = b % 10;
            vec.push_back(last);
            b = b / 10;
        }
        if (b > 0 && b <= 9)
            vec.push_back(b);
        int result = 0;
        for (auto d : vec)
        {
            result = result * 10 + d;
        }
        if (x == result)
            return 1;
        else
            return 0;
    }
};
int main() {
    Solution sol;
    if (sol.isPalindrome(12) == true)
    {
        std::cout << "True\n";
    }
    else
    {
        std::cout << "False\n";
    }
    
    return 0;
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
