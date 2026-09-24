#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int id;

public:
    Student()
    {
        name = "";
        id = 0;
    }
    Student(string name, int id);
    {
        this->name = name;
        this->id = id;
    }
};