#include "main.h"
//直接插入排序的具体实现

void insertSort(int testData[])
{
    int tempData[testDataCount];
    int key, numToCompare;
    //转存到临时数组
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    for (int i = 1; i < testDataCount; i++)
    {
        key = tempData[i];
        numToCompare = i - 1;
        //比key值大的元素依此后移,给key留出空间
        while (numToCompare >= 0 && key < tempData[numToCompare])
        {
            tempData[numToCompare + 1] = tempData[numToCompare];
            numToCompare--;
        }
        tempData[numToCompare + 1] = key;
        printCurrentResult(tempData, i);
    }
    printCurrentResult(tempData, -1);
}
