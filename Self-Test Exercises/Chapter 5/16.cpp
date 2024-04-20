#include <iostream>
#include <cstdlib>

void displayArray (double a[], std::size_t size);
int outOfOrder (double a[], std::size_t size);

int main()
{
    const std::size_t sizeOfA = 10;
    double A[sizeOfA] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Array A: ";
    displayArray(A, sizeOfA);

    std::cout << "outOfOrder array A?: ";
    std::cout << outOfOrder(A, sizeOfA) << std::endl;

    const std::size_t sizeOfB = 10;
    double B[sizeOfA] = {1.2, 2.1, 3.3, 2.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};

    std::cout << "Array B: ";
    displayArray(B, sizeOfB);

    std::cout << "outOfOrder array B?: ";
    std::cout << outOfOrder(B, sizeOfB) << std::endl;


}

void displayArray (double a[], std::size_t size)
{
    for(std::size_t i = 0; i < size; ++i)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int outOfOrder (double a[], std::size_t size)
{
    if (size == 0)
    {
        return -1;
    }

    for(std::size_t i = 1; i < size; ++i)
    {
        if (a[i] < a[i - 1])
        {
            return static_cast<int>(i);
        }
    }

    return -1;
}
