#include <iostream>

int main()
{
    setlocale(LC_ALL,"Rus");
    std::string my_name;
    std::cout << "Введите имя: \n";
    std::cin >> my_name;
    std::cout << "Здравствуйте, " << my_name << "!" << std::endl;
    return 0;

}
