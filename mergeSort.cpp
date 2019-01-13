#include "main.h"
//二路归并排序的具体实现

void merge(int *tempData, int low, int mid, int high)
{
    int i = low, j, k, temp;
    for (j = mid + 1; i < j && j <= high;)
    {                                   /*将数组后半段逐个插入前半段，必须要有i<j,
     不然i的范围无法控制，导致数组中其他关键字受影响*/
        if (tempData[i] <= tempData[j]) //找到tempData[j]要插入的位置
            ++i;
        else
        {
            temp = tempData[j]; //先把tempData[j]存起来，因为tempData[j-1]要赋给tempData[j]
            for (k = j - 1; k >= i; --k)
            { //从i到j-1数组后移
                tempData[k + 1] = tempData[k];
            }
            tempData[i] = temp; //将tempData[j]插入
            ++i;                //i后移
            ++j;                //j后移
        }
    }
}
void sortAction(int *tempData, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        sortAction(tempData, low, mid); //递归调用
        sortAction(tempData, mid + 1, high);
        merge(tempData, low, mid, high);
        printCurrentResult(tempData, sortCount++);
    }
}

void mergeSort(int testData[])
{
    sortCount = 0;
    int tempData[testDataCount];
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }
    sortAction(tempData, 0, testDataCount - 1);
    printCurrentResult(tempData, -1);
}
