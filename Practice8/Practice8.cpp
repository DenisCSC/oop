// Practice6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <string> // подключаем строки
#include <fstream> // подключаем файлы

using namespace std; // используем стандартное пространство имен

int main() {
    string s; // сюда будем класть считанные строки
    ifstream file("some_text.txt"); // файл из которого читаем (дл€ линукс путь будет выгл€деть по другому)

    while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
        s += "\n"; // что нибудь делаем со строкой например € добавл€ю плюсик в конце каждой строки
        cout << s << endl; // и снова вывожу на экран но уже модифицированную строку (без записи ее в файл)
    }

    file.close(); // об€зательно закрываем файл что бы не повредить его

    return 0;
}