#include "main.h"
//ð�����򷨵ľ���ʵ��
void bubbleSort(int testData[])
{
    int tempData[testDataCount];
    int key, swapTemp;
    //ת�浽��ʱ����
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    //��ѭ������δ����Χ
    for (int i = testDataCount; i > 0; i--)
    {
        //Сѭ�����������Ƚ�/����
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
