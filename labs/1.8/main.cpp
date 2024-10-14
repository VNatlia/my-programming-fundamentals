#include <iostream>

using namespace std;

int main()
{
    // ЗАВДАННЯ1
    // Оператор вибору if-else
    int nA = 88;
    cout << "Число" << nA << " у двійковій системі: " << bitset<32>(nA) << endl;

    if ((nA & 1) == 0)
    {
        int result = nA;
        cout << "Число парне" << nA << endl;
    }
    else
    {
        cout << "Число не парне " << nA << endl;
    }
    return 0;

    // Операція відношення ">"
    int b1 = 34, b2 = 2;
    if (nA > b1)
    {
        cout << "nA (" << nA << ") більше за b1 (" << b1 << ")" << endl;
    }
    else
    {
        cout << "nA (" << nA << ") не більше за b1 (" << b1 << ")" << endl;
    }

    if (nA > b2)
    {
        cout << "nA (" << nA << ") більше за b2 (" << b2 << ")" << endl;
    }
    else
    {
        cout << "nA (" << nA << ") не більше за b2 (" << b2 << ")" << endl;
    }

    // Оператор switch
    int nB = 10;
    switch (nA)
    {
    case 63:
        nB *= 1; // якщо nA = 63, то nB залишається без змін
        cout << "nA = 63, nB залишається без змін: " << nB << endl;
        break;
    case 64:
        nB *= 2; // якщо nA = 64, то nB збільшується в 2 рази
        cout << "nA = 64, nB збільшується в 2 рази: " << nB << endl;
        break;
    default:
        nB *= 0; // якщо nA не дорівнює 63 або 64, то nB = 0
        cout << "nA не дорівнює 63 або 64, тому nB = 0: " << nB << endl;
        break;
    }

    // Цикл do-while для знаходження суми чисел від 1 до 5
    int sum1 = 0;
    int i = 1;
    do
    {
        sum1 += i;
        i++;
    } while (i <= 5);
    cout << "Сума чисел від 1 до 5 (do-while): " << sum1 << endl;
    // Цикл do-while для знаходження суми чисел від 1 до 5
    int sum1 = 0;
    int i = 1;
    do
    {
        sum1 += i;
        i++;
    } while (i <= 5);
    cout << "Сума чисел від 1 до 5 (do-while): " << sum1 << endl;

    // Цикл while для знаходження суми чисел від 1 до 5
    int sum2 = 0;
    i = 1;
    while (i <= 5)
    {
        sum2 += i;
        // Цикл while для знаходження суми чисел від 1 до 5
        int sum2 = 0;
        i = 1;
        while (i <= 5)
        {
            sum2 += i;
            i++;
        }
        cout << "Сума чисел від 1 до 5 (while): " << sum2 << endl;

        // Цикл for для знаходження суми чисел від 1 до 5
        int sum3 = 0;
        for (int j = 1; j <= 5; j++)
        {
            sum3 += j;
        }
        cout << "Сума чисел від 1 до 5 (for): " << sum3 << endl;

        // ЗАВДАННЯ2
        //  Операція "Лічильник збільшення на 1"
        int c = 63;
        int resultA = nA + 1;
        int resultC = c + 1;
        cout << "Лічильник збільшення на 1 для nA: " << resultA << endl;
        cout << "Лічильник збільшення на 1 для c: " << resultC << endl;
        int resultA = nA + 1;
        int resultC = c + 1;
        cout << "Лічильник збільшення на 1 для nA: " << resultA << endl;
        cout << "Лічильник збільшення на 1 для c: " << resultC << endl;

        return 0;
    }
}