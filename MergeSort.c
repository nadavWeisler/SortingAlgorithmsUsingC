//
// Created by Weisl on 7/23/2020.
//

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1];
    int R[n2];

    int i, j;
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[p + i - 1];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[q + j];
    }

    i = 1;
    j = 1;

    for (int k = p; k < r; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i = i + 1;
        }
        else
        {
            arr[k] = R[j];
            j = j + 1;
        }
    }
}

void mergeSort(int arr[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}