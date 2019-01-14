#include "main.h"

//折半插入排序的具体实现
void binInsertSort(int testData[])
{
    int tempData[testDataCount];
    int key, high, low, moveStart;
    //转存到临时数组
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    for (int i = 1; i < testDataCount; i++)
    {
        //折半查找到应该存放的位置
        low = 0;
        high = i - 1;
        key = tempData[i];
        if (tempData[high] > key)
        {
            while (high > low)
            {
                if (tempData[(low + high) / 2] > key)
                {
                    high = (low + high) / 2;
                }
                else
                {
                    low = (low + high) / 2 + 1;
                }
            }
            moveStart = low;
            //比key值大的统一后移，留出空间
            moveBack(tempData, moveStart, i);
            tempData[moveStart] = key;
        }
        printCurrentResult(tempData, i);
    }
    printCurrentResult(tempData, -1);
}