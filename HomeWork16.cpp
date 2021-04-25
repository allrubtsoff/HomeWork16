#include <iostream>

using namespace std;

int main()
{   
    const int size = 3;
    int a[size][size] = { {1,2,3}, {4,5,6}, {7,8,9} };

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
           std::cout << a[i][j];
        }
        std::cout << "\n";
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum = (sum + a[i][j]);
            
        }
    }
    std::cout << sum << "\n" << sum % 20;

}

