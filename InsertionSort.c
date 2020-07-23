//
// Created by Weisl on 7/23/2020.
//

void insertionSort(int arr[], int length)
{
    int key, j;
    for (int i = 2; i < length; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j > 0 && arr[j] > key)
        {
            arr[j + 1] = arr[i];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}