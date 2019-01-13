#include "main.h"
//简单选择排序的具体实现
void selectSort(int testData[])
{
    int tempData[testDataCount];
    int selectNum, minTemp, minP, swapTemp;
    //转存到临时数组
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    //大循环选定一个值 再在其后的数中找出最小值与之交换
    for (int i = 0; i < testDataCount; i++)
    {
        selectNum = tempData[i];
        minTemp = selectNum; //当前最小值
        minP = i;            //当前最小值的下标
        for (int j = i + 1; j < testDataCount; j++)
        {
            if (tempData[j] < minTemp)
            {
                minTemp = tempData[j];
                minP = j;
            }
        }
        if (minP > i && minTemp < selectNum)//如果其后的最小值小余选定的值则进行交换
        {
            swap(tempData[i], tempData[minP]);
        }
        printCurrentResult(tempData, i + 1);
    }
    printCurrentResult(tempData, -1);
}
