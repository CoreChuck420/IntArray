﻿// main.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "IntArray.h"
#include <exception>
using namespace std;
int main() {
    try {
        IntegerArray array(10);
        for (int i = 0; i < 10; ++i)
            array[i] = i + 1;
        array.resize(8);
        array.insertBefore(20, 5);
        array.remove(3);
        array.insertAtEnd(30);
        array.insertAtBeginning(40);
        cout << array.find(30) << endl;
        for (int i{ 0 }; i < array.getLength(); ++i)
            std::cout << array[i] << ' ';
        return 0;
    }
    catch (bad_length& ba) {
        cout << ba.what() << endl;
    }
    catch (bad_range& br) {
        cout << br.what() << endl;
    }
    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
