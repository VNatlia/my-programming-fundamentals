#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

int precedence(char c)
{
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2; // more priority
    return -1;
}

string infixToPostfix(const string& expression) {
    stack<char> operators;  // Стек для операторів
    string postfix;         // Результуючий постфіксний вираз

    for (char c : expression) {
        // Якщо символ операнд (цифра або літера), додаємо до результату
        if (isalnum(c)) {
            postfix += c;
        }
        // Якщо символ - оператор
        else {
            // Витягуємо зі стека всі оператори з більшим або рівним пріоритетом
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);  // Додаємо поточний оператор до стека
        }
    }

    // Витягуємо залишки операторів зі стека
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}




int performOperation(double number1, double number2, char operation)
//обчислюєпрості дії та повертає результат
{
    if (operation ==  '+') {
        return  number1 + number2;
    }
    else if (operation == '-') {
        return  number1 - number2;
    }
    else if (operation == '*') {
        return  number1 * number2;
    }
    else if (operation == '/') {
        return  number1 / number2;
    }

}

int evaluatePostfix(const string& expression)
{
    stack<int> operands;  // Стек для операндів

    for (char c : expression) {
        // Якщо символ операнд (цифра), перетворюємо її на число і додаємо до стека
        if (isdigit(c)) {
            operands.push(c - '0');  // Перетворення символу цифри на число
        }
        // Якщо символ оператор, обчислюємо вираз
        else {
            int operand2 = operands.top(); operands.pop(); // Другий операнд
            int operand1 = operands.top(); operands.pop(); // Перший операнд
            int result = performOperation(operand1, operand2, c); // Обчислюємо операцію
            operands.push(result);  // Додаємо результат до стека
        }
    }

    return operands.top();  // Останній елемент у стеці - це результат
}


int main()
{
  
    string orange;
    cout << "Enter: " << endl;
    cin >> orange;
    cout << evaluatePostfix(infixToPostfix(orange));


    return 0;
}