#include "main.h"
//冒泡排序法的具体实现
void bubbleSort(int testData[])
{
    int tempData[testDataCount];
    int key, swapTemp;
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

	//大循环循环未排序范围 
    for (int i = testDataCount; i > 0; i--)
    {
        for (int j = 1; j < i; j++)//小循环两两比较交换 
        {
            if (tempData[j] < tempData[j - 1])
            {
                swapTemp = tempData[j - 1];
                tempData[j - 1] = tempData[j];
                tempData[j] = swapTemp;
            }
        }
        printCurrentResult(tempData, testDataCount - i + 1);
    }
    printCurrentResult(tempData, -1);
}
