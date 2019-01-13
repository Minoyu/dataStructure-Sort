#include "main.h"
//从第m个元素开始到n个元素结束整体向后移动1格
void moveBack(int data[], int m, int n)
{
    for (int i = n; i > m; i--)
    {
        data[i] = data[i - 1];
    }
}

//折半插入排序的具体实现
void binInsertSort(int testData[])
{
    int tempData[testDataCount];
    int key, high, low, moveStart;
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    for (int i = 1; i < testDataCount; i++)
    {
        //折半查找
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
            //比比较值大的统一后移
            moveBack(tempData, moveStart, i);
            tempData[moveStart] = key;
        }
        printCurrentResult(tempData, i);
    }
    printCurrentResult(tempData, -1);
}