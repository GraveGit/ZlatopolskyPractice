#include <iostream>

int main(int argc, char *argv[])
{
    int a =0, n = 0;
    std::cout << "Enter the number of apartments: ";
    std::cin >> n;
    std::cout << "Enter the first apartment number: ";
    std::cin >> a;

    if ((a % 2 + n) / 2 % 2)
    {
        std::cout << "Sum is odd";
    } else std::cout << "Sum is even";

    return 0;
}
