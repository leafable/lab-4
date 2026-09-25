#include <iostream>
#include "Student.h"
using namespace std;

int findById(Student students[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (students[i].getId() == id) {
            return i;
        }
    }
    return -1; // Not found
}

bool removeById(Student& students, int size,int id) {
    int index = findById(students, size, id);
    if (index != -1) {
        for (int i = index; i < size - 1; i++) {
            students[i] = students[i + 1];
        }
        students[size - 1] = Student();
        return true;
    }
    return false;
}

int main(){
    const int size = 5;
    Student student[size] = {
        Student("Alice", 1),
        Student("Bobby", 2),
        Student("Charlie", 3),
        Student("David", 4),
        Student("Eve", 5)
    };

    int index = findById(student, size, 3);

    removeById(student, size, index);

    for (int i = 0; i < size; i++) {
        cout << "Student Name: " << student[i].getName() << ", ID: " << student[i].getId() << endl;
    }

    return 0;
}

// discord: leafable
// In case you wanted to contact me since the professor ended the meeting