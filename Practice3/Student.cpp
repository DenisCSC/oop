#include "pch.h"
#include "Student.h"
#include <string>


Student::Student()
{
}


Student::~Student()
{
}

std::string Student::getName()
{
    return name;
}

void Student::setName(std::string new_name)
{
    name = new_name;
}

std::string Student::getDegree()
{
    return degree;
}

void Student::setDegree(std::string n_degree)
{
    degree = n_degree;
}

void Student::setAveragescore(double score)
{
    averagescore = score;
}

double Student::getAveragescore()
{
    return averagescore;

}

