#include "main.h"
//��ѡ������ľ���ʵ��
void selectSort(int testData[])
{
    int tempData[testDataCount];
    int selectNum, minTemp, minP, swapTemp;
    //ת�浽��ʱ����
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    //��ѭ��ѡ��һ��ֵ �������������ҳ���Сֵ��֮����
    for (int i = 0; i < testDataCount; i++)
    {
        selectNum = tempData[i];
        minTemp = selectNum; //��ǰ��Сֵ
        minP = i;            //��ǰ��Сֵ���±�
        for (int j = i + 1; j < testDataCount; j++)
        {
            if (tempData[j] < minTemp)
            {
                minTemp = tempData[j];
                minP = j;
            }
        }
        if (minP > i && minTemp < selectNum)//���������СֵС��ѡ����ֵ����н���
        {
            swap(tempData[i], tempData[minP]);
        }
        printCurrentResult(tempData, i + 1);
    }
    printCurrentResult(tempData, -1);
}
