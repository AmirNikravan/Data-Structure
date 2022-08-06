#include <iostream>

void InsertionSort(int *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int array[20]{2, 4, 11, 3, 7, 1, 95, 13, 42, 35, 12, 45, 34, 76, 111, 23, 45, 61, 29, 80};
    InsertionSort(array, 20);
    for (int i : array)
    {
        std::cout << i << ", ";
    }
    return 0;
}