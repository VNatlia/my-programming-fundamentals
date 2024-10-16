#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // ЗАВДАННЯ1
    // Оператор вибору if-else
    {
        int nA = 88;
        cout << "Число " << nA << " у двійковій системі: " << bitset<32>(nA) << endl;

        if ((nA & 1) == 0)
        {
            int result = nA;
            cout << "Число парне " << nA << endl;
        }
        else
        {
            cout << "Число не парне " << nA << endl;
        }
    }
    // 2. Підрахунок кількості одиничних бітів

    int nB = 766688;
    int kivi = 0; //використ для підрахунку кількості 1-чок
    cout << "Число " << nB << " у двійковій системі: " << bitset<32>(nB) << endl;

    int count = sizeof(int)*8;
    for (int i = 0; i < count; i++) //від 0 до 12
    {
        if (nB & (1 << i)) 
            kivi++; //якщо на позиції не нульовий рез то збільшуєм
    }

    cout << "Кількість одиниць: " << kivi << endl;

    // 3. Перевірка встановленого біта на певній позиції

    int nC = 165;
    int bibi = 5;
//якщо на 5-ій позиції 0, то 0, якщо 1 - 1
    cout << "Число " << nC << " у двійковій системі: " << bitset<32>(nC) << endl;

    cout << bool(nC & (1 << bibi)) << endl;  //bool-t/f

    return 0;
}
    
    