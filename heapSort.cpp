#include "main.h"
//堆排序的具体实现

//构造最大堆
void MaxHeapFixDown(int tempData[], int i, int n)
{
    int j = 2 * i + 1;
    int temp = tempData[i];
    while (j < n)
    {
        if (j + 1 < n && tempData[j] < tempData[j + 1])
            ++j;
        if (temp > tempData[j])
            break;
        else
        {
            tempData[i] = tempData[j];
            i = j;
            j = 2 * i + 1;
        }
    }
    tempData[i] = temp;
}

//堆排序
void heapSort(int testData[])
{
    sortCount = 0;
    int n = testDataCount;
    int tempData[testDataCount];
    //转存到临时数组
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--)
        MaxHeapFixDown(tempData, i, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(tempData[i], tempData[0]);
        MaxHeapFixDown(tempData, 0, i);
        printCurrentResult(tempData, sortCount++);
    }
    printCurrentResult(tempData, -1);
}
