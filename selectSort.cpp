#include "main.h"
//简单选择排序的具体实现
void selectSort(int testData[])
{
    int tempData[testDataCount];
    int selectNum, minTemp, minP, swapTemp;
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    for (int i = 0; i < testDataCount; i++)
    {
        selectNum = tempData[i];
        minTemp = selectNum;
        minP = i;
        for (int j = i + 1; j < testDataCount; j++)
        {
            if (tempData[j] < minTemp)
            {
                minTemp = tempData[j];
                minP = j;
            }
        }
        if (minP > i)
        {
            swapTemp = tempData[i];
            tempData[i] = tempData[minP];
            tempData[minP] = swapTemp;
        }
        printCurrentResult(tempData, i + 1);
    }
    printCurrentResult(tempData, -1);
}
