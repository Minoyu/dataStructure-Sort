#include "main.h"
//ð�����򷨵ľ���ʵ��
void bubbleSort(int testData[])
{
    int tempData[testDataCount];
    int key, swapTemp;
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

	//��ѭ��ѭ��δ����Χ 
    for (int i = testDataCount; i > 0; i--)
    {
        for (int j = 1; j < i; j++)//Сѭ�������ȽϽ��� 
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
