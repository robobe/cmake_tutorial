#include <iostream>

#include "addition.hpp"
#include "division.cpp"
#include "print_result.cpp"

using namespace std;

int main()
{
    std::string str = "GeeksforGeeks";
    int first_no = 1;
    int second_no = 2;
    auto result_add = addition(first_no, second_no);
    auto result_div = division(first_no, second_no);

    print_result("Addition", result_add);
    print_result("Division", result_div);

    if (str.starts_with("Geeks")) {
        std::cout << "true" << endl;
    }
    else {
        std::cout << "false" << endl;
    }
    return 0;
}
