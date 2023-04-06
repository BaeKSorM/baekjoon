#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << (a > b ? 1 : a == b ? 0
                                     : -1);
}