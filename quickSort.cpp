#include "main.h"
//快速排序的具体实现
int sortCount = 0;

//递归部分
void doAction(int tempData[], int low, int high)
{
    int i = low;
    int j = high;
    if (i > j)
        return;
    int temp = tempData[low];
    while (i != j)
    {
        //尾部与基准比较
        while (tempData[j] >= temp && i < j)
            j--;
        //头部与基准比较
        while (tempData[i] <= temp && i < j)
            i++;
        if (i < j)
            doSwap(tempData[i], tempData[j]);
    }
    //将基准temp放于自己的位置，（第i个位置）
    doSwap(tempData[low], tempData[i]);
    printCurrentResult(tempData, sortCount++);
    doAction(tempData, low, i - 1);
    doAction(tempData, i + 1, high);
}

void quickSort(int testData[])
{
    int tempData[testDataCount];
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }
    sortCount = 0;
    doAction(tempData, 0, testDataCount-1);
    printCurrentResult(tempData, -1);
}