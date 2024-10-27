#include <iostream>
#include <vector>

using namespace std;

int main()
{
    {
        vector<int> kivi = {3, 55, 7, 5, 8, 5, 324, 87, 44};  //масив чисел
        int P = 5;  // записуємо число, яке шукаємо у векторі
        int index;  // створюємо змінну для збереження індексу першого входження числа P

        //цикл для пошуку першого входження числа P у векторі
        for (int i = 0; i < kivi.size(); i++) {
            if (kivi[i] == P) {
                index = i;  // зберігаємо індекс першого знайденого елемента
                break;  // зупиняємо цикл
            }
        }

        // тут виводимо індекс або повідомлення, якщо значення не знайдено
        if (index != 0) {
            cout << "Індекс " << P << " у масиві = " << index << endl;
        } else {
            cout << "Значення не існує" << endl;
        }

    }

   //Пошук найменшого додатнього числа у векторі
    {
        vector<int> kivi = {-9, 55, -7, 5, 8, 3, 90, 13, 456};  //створили масив чисел, що містить додатні та від'ємні значення

        int minPosVal = -1;  // задаємо початкове значення для найменшого додатнього числа (якщо немає додатніх, залишиться -1)
        bool posVal = false;  // позначаємо, чи знайдено додатнє число

        // проходимо по всім елементам вектора
        for (int i = 0; i < kivi.size(); i++) {
            if (kivi[i] > 0) {  // якщо елемент додатній
                if (posVal == false || kivi[i] < minPosVal) {  // якщо це перший додатній елемент або він менший за попередній
                    minPosVal = kivi[i];  // оновлюємо мінімум числа
                    posVal = true;  // фіксуємо, що знайдено хоча б одне додатнє число
                }
            }
        }

        // виводимо результат або повідомляємо, що додатніх чисел немає
        if (posVal == true) {
            cout << "Мінімальне додатнє значення = " << minPosVal << endl;
        } else {
            cout << "Немає додатних значень" << endl;
        }
    }

    //  Обмін місцями мінімального і максимального значення у векторі
    {
        vector<int> kivi = {-9, -55, -7, 5, 8, 3, 123, 99, 45};  // створюємо масив чисел

        int minIndex = 0;  // створюємо індекс мінімального елемента
        int maxIndex = 0;  // створюємо індекс максимального елемента

        // тут проходимо по вектору, знаходимо індекси мінімального і максимального значень
        for (int i = 1; i < kivi.size(); i++) {
            if (kivi[i] < kivi[minIndex]) {  // якщо поточний елемент менший за поточне мінімальне значення
                minIndex = i;  // оновлюємо індекс мінімального значення
            }
            if (kivi[i] > kivi[maxIndex]) {  // якщо поточний елемент більший за поточне максимальне значення то
                maxIndex = i;  // оновлюємо індекс максимального значення
            }
        }

        // виводимо мінімальне і максимальне значення
        cout << "Мінімальне значення = " << kivi[minIndex] << endl;
        cout << "Максимальне значення = " << kivi[maxIndex] << endl;

        // обмін значень між мінімальним і максимальним елементами
        int temp = kivi[minIndex];  // зберігаємо мінімальне значення у тимчасову змінну
        kivi[minIndex] = kivi[maxIndex];  // замінюємо мінімальне значення на максимальне
        kivi[maxIndex] = temp;  // повертаємо збережене мінімальне значення на місце максимального

        // виводимо нові мінімальне і максимальне значення після обміну
        cout << "Мінімальне значення (після обміну) = " << kivi[minIndex] << endl;
        cout << "Максимальне значення (після обміну) = " << kivi[maxIndex] << endl;
    }

    return 0;
}
