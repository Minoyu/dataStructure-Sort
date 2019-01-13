#include "main.h"
//�ӵ�m��Ԫ�ؿ�ʼ��n��Ԫ�ؽ�����������ƶ�1��
void moveBack(int data[], int m, int n)
{
    for (int i = n; i > m; i--)
    {
        data[i] = data[i - 1];
    }
}

//�۰��������ľ���ʵ��
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
        //�۰����
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
            //�ȱȽ�ֵ���ͳһ����
            moveBack(tempData, moveStart, i);
            tempData[moveStart] = key;
        }
        printCurrentResult(tempData, i);
    }
    printCurrentResult(tempData, -1);
}