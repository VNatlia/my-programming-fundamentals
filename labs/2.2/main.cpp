#include <iostream>

using namespace std;

int main(){
    enum Names {Mary, Tom, Jake, Bella, Edvard, Valentina, Sasha};

    struct Student
    {
        Names name;
        double averageMark;
        bool dance;
    };

    Student myStudents[7];
    myStudents[0] = {Mary, 5, true};
    myStudents[1] = {Tom, 4.3, true};
    myStudents[2] = {Jake, 2.9, false};
    myStudents[3] = {Bella, 3.5, false};
    myStudents[4] = {Edvard, 2.1, true};
    myStudents[5] = {Valentina, 5, true };
    myStudents[6].name = Sasha;
    myStudents[6].averageMark = 4;
    myStudents[6].dance = true;
 
    int count = 0;
    for (int i = 0; i < 7; i++){
        if(myStudents[i].averageMark >= 4 && myStudents[i].dance == true) {
            count++;
        }
    }
    float percent = (float)count * 100 / 7;

}