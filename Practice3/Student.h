#pragma once
#include <string>

class Student
{
public:
    Student();
    ~Student();
    std::string getName();
    void setName(std::string);
    std::string getDegree();
    void setDegree(std::string);
    void setAveragescore(double);
    double getAveragescore();
private:
    std::string name;
    std::string degree;
    double averagescore;

};

