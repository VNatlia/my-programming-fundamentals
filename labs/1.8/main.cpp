#include <iostream>

using namespace std;

int main()
 {
   //ЗАВДАННЯ 1
    int am = 63;

    // Оператор вибору if-else 
    if  (am> 0)
         cout << "am є додатнім числом\n";
    else
         cout << "am є від'ємним або нуль\n";

    // Оператор вибору switch-case 
    switch (am) {
        case 63:
             cout << "am дорівнює 63\n";
            break;
        case -18:
            cout << "am дорівнює -18\n";
            break;
        default:
            cout << "am має інше значення\n";
    }

    // Цикл for 
    for (int i = 0; i < 5; i++)
         cout << "Цикл for: %d\n", i;

    // Цикл while 
    int i = 0;
    while (i < 3) {
         cout << "Цикл while: %d\n", i;
        i++;
    }

    // Цикл do-while 
    i = 0;
    do {
         cout << "Цикл do-while: %d\n", i;
        i++;
    } while (i < 2);

    return 0;
 
    
    //ЗАВДАННЯ 2
    int a = 88, b1 = 34, b2 = 2;  // Значення з таблиці
    int result;

    //  Лічильник збільшення на 1
    result = a + 1;
    cout << "Лічильник збільшення на 1 для a: %d\n", result;

    //  відношення ">"
    if (a > b1)
       cout << "a (%d) більше за b1 (%d)\n", a, b1;
    else
       cout << "a (%d) не більше за b1 (%d)\n", a, b1;

    if (a > b2)
       cout << "a (%d) більше за b2 (%d)\n", a, b2;
    else
       cout << "a (%d) не більше за b2 (%d)\n", a, b2;

    // Додаткові операції 
    int c = 63;
    result = c + 1;
    cout << "Лічильник збільшення на 1 для c: %d\n", result;

    return 0;
}
