#include <iostream>

// структура, що представляє вузол двозв'язного списку
struct Node {
    int data; // дані, які будем зберігати у вузлі
    Node* next; // вказівник на наступний вузол
    Node* prev; // вказівник на попередній вузол
};

// оголошуємо функції, що працюватимуть зі списком
void addToFront(Node** head, int value); // функція додає новий вузол на початок списку
void reverseList(Node** head); // команда перевертає  список (реверс)
void addToEnd(Node** head, int value); // додає новий вузол в кінець списку
void removeFromEnd(Node** head); // видаляє останній вузол зі списку
void printList(Node* head); // виводить елементи списку на екран
Node* searchElement(Node* head, int value); //шукає вузол у списку за заданим значенням
void sortList(Node** head); // тут сортування списку за зростанням
void clearList(Node** head); // тут очищення списку, видаляє всі вузли

int main() {
    Node* head = nullptr; //створюємо порожній список (головний вузол)

    // додаємо елементи на початок списку
    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);

    std::cout << "List after adding elements: ";
    printList(head); // виводимо список після додавання елементів

    int searchValue = 20; // задаємо значення , яке будемо шукати в списку
    Node* foundNode = searchElement(head, searchValue); //тут викликаєм функцію пошуку
    if (foundNode) { //якщо вузол знайдено то
        std::cout << "Element " << searchValue << " found in the list." << std::endl;
    } else { // якщо вузол не знайдено
        std::cout << "Element " << searchValue << " not found in the list." << std::endl;
    }

    removeFromEnd(&head); // тут видаляємо останній елемент
    std::cout << "List after removing last element: ";
    printList(head); // виводимо список після видалення

    reverseList(&head); // перевертаємо список
    std::cout << "List after reversing: ";
    printList(head); // виводимо список після реверсу

    sortList(&head); // сортуємо список
    std::cout << "List after sorting: ";
    printList(head); // тут виводим список після сортування

    clearList(&head); //очищаєм список
    std::cout << "List after clearing: ";
    printList(head); // тут виводим порожній список

    return 0;
}

// функція для додавання нового вузла на початок списку
void addToFront(Node** head, int value) {
    //спочатку створюємо новий вузол, який містить дані та вказівники на поточну голову та null для попереднього
    Node* newNode = new Node{value, *head, nullptr}; 
    if (*head != nullptr) { //якщо список не порожній то
        (*head)->prev = newNode; // встановлюємо новий вузол як попередній для колишньої голови
    }
    *head = newNode; // заміняємо (оновлюєм) голову списку на новий вузол
}

// функція для додавання нового вузла в кінець списку
void addToEnd(Node** head, int value) {
    // створюєм новий вузол, без вказівників на інші елементи
    Node* newNode = new Node{value, nullptr, nullptr}; 
    if (*head == nullptr) { // якщо список порожній то
        *head = newNode; // встановлюємо новий вузол як голову
    } else {
        Node* temp = *head; // використовуємо тимчасовий вказівник для проходу по списку
        while (temp->next != nullptr) { //переходимо до останнього елемента
            temp = temp->next;
        }
        temp->next = newNode; // встановлюємо новий вузол як наступний
        newNode->prev = temp; // вказуємо новий вузол як попередній для останнього
    }
}

// функція для видалення останнього вузла зі списку
void removeFromEnd(Node** head) {
    if (*head == nullptr) return; // якщо список порожній, нічого не робимо
    if ((*head)->next == nullptr) { // якщо у списку лише один елемент
        delete *head; // тут видалаємо цей елемент
        *head = nullptr; // очищаємо голову списку
    } else {
        Node* temp = *head; // виористовуємо тимчасовий вказівник для проходу по списку
        while (temp->next != nullptr) { // переходимо до останнього елемента
            temp = temp->next;
        }
        temp->prev->next = nullptr; // оновлюємо зв'язок передостаннього вузла
        delete temp; // видаляє останній вузол
    }
}

// функція для друку списку
void printList(Node* head) {
    if (head == nullptr) { // якщо список порожній
        std::cout << "null" << std::endl; // виводимо "null"
        return;
    }
    Node* current = head; // створюєм тимчасовий вказівник на поточний елемент
    while (current != nullptr) { // проходимо  по всіх вузлах
        std::cout << current->data << " -> "; // тоді виводимо значення вузла
        current = current->next; //тут переходимо до наступного вузла
    }
    std::cout << "null" << std::endl; // вказуємо на кінець списку
}

// функція для пошуку елемента за значенням
Node* searchElement(Node* head, int value) {
    Node* current = head; // вказуєм на початок з голови
    while (current != nullptr) { // проходимо по списку
        if (current->data == value) return current; //якщо знайдено, повертаємо цей вузол
        current = current->next; // тут переходимо до наступного вузла
    }
    return nullptr; // якщо не знайдено, повертаємо null
}

// функція для реверсу списку
void reverseList(Node** head) {
    Node* current = *head; // початок з голови
    Node* temp = nullptr; // тимчасовий вказівник для обміну вказівників
    while (current != nullptr) { // перевертаєм всі вузли
        temp = current->prev; // зберігаєм попередній вказівник
        current->prev = current->next; // обмінюєм місцями вказівники
        current->next = temp;
        current = current->prev; // переходимо до наступного елемента
    }
    if (temp != nullptr) {
        *head = temp->prev; // оновлюєм голову на новий початок
    }
}

// функція для сортування списку
void sortList(Node** head) {
    if (*head == nullptr) return; // якщо список порожній, виходимо
    bool swapped; // встановлюємо прапорець для перевірки на обмін елементів
    do {
        swapped = false; // позбуваємося від прапореця
        Node* current = *head; // починаємо з голови
        while (current->next != nullptr) { // проходимо по всіх елементах
            if (current->data > current->next->data) { // якщо елемент більший за наступний
                std::swap(current->data, current->next->data); // міняєм місцями значення
                swapped = true; // позначаєм, що був обмін
            }
            current = current->next; // переходим до наступного елемента
        }
    } while (swapped); // продовжуєм, поки є обміни
}

//функція для очищення списку
void clearList(Node** head) {
    Node* current = *head; // починаєм з голови
    while (current != nullptr) { // проходим по всіх елементах
        Node* temp = current; // тимчасово тут зберігаємо поточний вузол
        current = current->next; // переходимо до наступного вузла
        delete temp; // видаляєм поточний вузол
    }
    *head = nullptr; // очищаєм голову списку