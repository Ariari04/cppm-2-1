// cppm-2-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class months {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    jule,
    august,
    september = 9,
    octomber,
    november,
    december
};
int main()
{
    setlocale(LC_ALL, "Russian");
    while (1){
        int n;
        std::cout << "Введите номер месяца: ";
        std::cin >> n;
        if (n == 0) {
            break;
        }
        else if (n == int(months::january)) {
            puts("Январь");
        }
        else if (n == int(months::february)) {
            puts("Февраль");
        }
        else if (n == int(months::march)) {
            puts("Март");
        }
        else if (n == int(months::april)) {
            puts("Апрель");
        }
        else if (n == int(months::may)) {
            puts("Май");
        }
        else if (n == int(months::june)) {
            puts("Июнь");
        }
        else if (n == int(months::jule)) {
            puts("Июль");
        }
        else if (n == int(months::august)) {
            puts("Август");
        }
        else if (n == int(months::september)) {
            puts("Сентябрь");
        }
        else if (n == int(months::octomber)) {
            puts("Октябрь");
        }
        else if (n == int(months::november)) {
            puts("Ноябрь");
        }
        else if (n == int(months::december)) {
            puts("Декабрь");
        }
        else {
            puts("Неправильный номер!");
        }
    }
    puts("До свидания!");
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
