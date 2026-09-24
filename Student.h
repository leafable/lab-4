#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student()
{
private:
    string name;
    int id;

public:
    int findByName(Student& student[], string name);
    bool removeById(int id);
    void printAll();
    int menu();
};