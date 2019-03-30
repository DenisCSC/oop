#include <iostream>
#include <fstream>

/*
 Объявите указатель на массив типа int и выделите память память
для 12-ти элементов. Необходимо написать функцию, которая
поменяет значения четных и нечетных ячеек массива.
Например, есть массив из 4-х целочисленных элементов:
 */


using namespace std;

void change_values_in_array(int *ptr, size_t size) {
    for (size_t i = 0; i < size; i += 2) {
        int tmp = ptr[i];
        ptr[i] = ptr[i + 1];
        ptr[i + 1] = tmp;

    }
}


int main() {
    cout << "Enter size of array";
    size_t array_size;
    cin >> array_size;

    int *ptr = new int[array_size];

    for (size_t i = 0; i < array_size; i++) {
        cout << "Enter value: ";
        cin >> ptr[i];
    }

    if (array_size == 1) {
        cout << ptr[0];
        return 0;
    }

    change_values_in_array(ptr, array_size);

    for (size_t i = 0; i < array_size; i++) {
        cout << " " << ptr[i];
    }


}