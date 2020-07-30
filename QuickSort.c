//
// Created by Weisl on 7/30/2020.
//

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int wall = low;
    for (int i = low; i < high; i++)
    {
        if (array[i] <= pivot)
        {
            int temp = array[wall];
            array[wall] = array[i];
            array[i] = temp;
            wall++;
        }
    }
    array[high] = array[wall];
    array[wall] = pivot;
    return wall;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(array, low, high);
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}