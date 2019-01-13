#include "main.h"
//��������ľ���ʵ��
int sortCount = 0;

//�ݹ鲿��
void doAction(int tempData[], int low, int high)
{
    int i = low;
    int j = high;
    if (i > j)
        return;
    int temp = tempData[low];
    while (i != j)
    {
        //β�����׼�Ƚ�
        while (tempData[j] >= temp && i < j)
            j--;
        //ͷ�����׼�Ƚ�
        while (tempData[i] <= temp && i < j)
            i++;
        if (i < j)
            doSwap(tempData[i], tempData[j]);
    }
    //����׼temp�����Լ���λ�ã�����i��λ�ã�
    doSwap(tempData[low], tempData[i]);
    printCurrentResult(tempData, sortCount++);
    doAction(tempData, low, i - 1);
    doAction(tempData, i + 1, high);
}

void quickSort(int testData[])
{
    int tempData[testDataCount];
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }
    sortCount = 0;
    doAction(tempData, 0, testDataCount-1);
    printCurrentResult(tempData, -1);
}