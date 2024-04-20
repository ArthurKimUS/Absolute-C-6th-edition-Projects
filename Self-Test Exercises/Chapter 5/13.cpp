#include <cstdlib>
#include <iostream>


void initializeArray (int a[], std::size_t size);
void displayArray (int a[], std::size_t size);
void oneMore (int a[], std::size_t size);


int main()
{
    const int aSize = 10;
    int a[aSize];
    initializeArray(a, aSize);

    std::cout << "before oneMore: ";
    displayArray(a, aSize);

    oneMore(a, aSize);
    std::cout << "after oneMore: ";
    displayArray(a, aSize);

}

void initializeArray (int a[], std::size_t size)
{
    for (int i = 0; i < 10; ++i)
        {
            a[i] = i;
        }
}


void displayArray (int a[], std::size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void oneMore (int a[], std::size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        ++a[i];
    }
}
