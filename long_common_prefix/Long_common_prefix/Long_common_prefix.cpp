// Long_common_prefix.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdio.h>
#include <vector>
class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string answer;
        for (int i = 0; i < strs[0].length() - 1; i++)
        {
            if (strs[0][i] == strs[1][i] && strs[0][i] == strs[2][i])
            {

                answer += strs[0][i];
            }
            else
                break;

        }
        return answer;
    }   
};

int main()
{   
    std::vector<std::string> aww = {"flower", "flow", "flight" };
    Solution sol;
    std::cout<<sol.longestCommonPrefix(aww);
    
    
    
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
