#include "main.h"
//冒泡排序法的具体实现
void bubbleSort(int testData[])
{
    int tempData[testDataCount];
    int key, swapTemp;
    //转存到临时数组
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    //大循环决定未排序范围
    for (int i = testDataCount; i > 0; i--)
    {
        //小循环进行两两比较/交换
        for (int j = 1; j < i; j++)
        {
            if (tempData[j] < tempData[j - 1])
            {
                swap(tempData[j], tempData[j - 1]);
            }
        }
        printCurrentResult(tempData, testDataCount - i + 1);
    }
    printCurrentResult(tempData, -1);
}
