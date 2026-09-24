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
    };
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    };
    void setName(string name)
    {
        this->name = name;
    };
    void setId(int id)
    {
        this->id = id;
    };
    string getName()
    {
        return name;
    };
    int getId()
    {
        return id;
    };
};