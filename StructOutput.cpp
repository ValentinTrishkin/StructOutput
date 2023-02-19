// StructOutput.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


struct adress
{
    std::string country;
    std::string city;
    std::string street;
    std::string house;
    int apartment;
    int index;
};

void print_adress (adress* person)
{
    std::cout << "Страна: " << person -> country << std::endl;
    std::cout << "Город: " << person->city << std::endl;
    std::cout << "Улица: " << person->street << std::endl;
    std::cout << "Дом: " << person->house << std::endl;
    std::cout << "Квартира: " << person->apartment << std::endl;
    std::cout << "Индекс: " << person->index << std::endl << std::endl;
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Rus");
    adress person = { "РФ", "Москва", "Косыгина", "2", 8, 119334 };
    adress person_1 = { "РФ", "Белгород", "Сумская", "32", 18, 308015 };
    print_adress(&person);
    print_adress(&person_1);
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
