// Num_target.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;




int main()
{
    vector<int> wholeNumbers;
    wholeNumbers.push_back(20);
    wholeNumbers.push_back(-45);

    cout << wholeNumbers[0] << endl;
    cout << wholeNumbers[1] << endl;
    wholeNumbers.push_back(200);
    cout << wholeNumbers.back() << endl;
    wholeNumbers.push_back(200);
    wholeNumbers.push_back(200);
    cout << wholeNumbers.back() << endl;
    wholeNumbers.push_back(200);
    cout << wholeNumbers.back() << endl;
    cout << wholeNumbers.back() << endl;
    cout << wholeNumbers.size() << endl;
    cout << wholeNumbers.capacity();
    cout << "..........." << endl;
    wholeNumbers.erase(3);
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
