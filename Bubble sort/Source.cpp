//Пузырьковая сортировка

#include <iostream>

void bubbleSort(int array[], int size) 
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
            {
                // swap arr[j] and arr[j+1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

int main()
{
    const int size = 7;
    int arr[size] = { 64, 34, 25, 12, 22, 11, 90 };
    bubbleSort(arr, size);
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    return 0;
}