#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int size);
void merge(int arr[], int leftSize, int rightSize);

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10, 11, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}

void mergeSort(int arr[], int size)
{
    if (size <= 1)
        return;
    int mid = size / 2;
    mergeSort(arr, mid);
    mergeSort(arr + mid, size - mid);
    merge(arr, mid, size - mid);
}

void merge(int arr[], int leftSize, int rightSize)
{
    int total = leftSize + rightSize;
    int *temp = malloc(total * sizeof(int));

    int i = 0;
    int j = leftSize;
    int k = 0;

    while (i < leftSize && j < total)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i < leftSize)
        temp[k++] = arr[i++];
    while (j < total)
        temp[k++] = arr[j++];

    for (int t = 0; t < total; t++)
        arr[t] = temp[t];

    free(temp);
}
