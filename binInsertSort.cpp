#include "main.h"

//�۰��������ľ���ʵ��
void binInsertSort(int testData[])
{
    int tempData[testDataCount];
    int key, high, low, moveStart;
    //ת�浽��ʱ����
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }

    for (int i = 1; i < testDataCount; i++)
    {
        //�۰���ҵ�Ӧ�ô�ŵ�λ��
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
            //��keyֵ���ͳһ���ƣ������ռ�
            moveBack(tempData, moveStart, i);
            tempData[moveStart] = key;
        }
        printCurrentResult(tempData, i);
    }
    printCurrentResult(tempData, -1);
}