#pragma once

typedef int DataType;

//������нڵ�ṹ
typedef struct QNode
{
	struct QNode * next;
	DataType val;

}QNode;
//������ж��нṹ
typedef struct Queue
{
	QNode * head;
	QNode * tail;
	int size; //��ЧԪ�ظ�����

}Queue;

void InitQueue(Queue * q);//��ʼ������
void PushQueue(Queue * q,DataType val );//��ӣ�
void PopQueue(Queue * q);//����
int SizeQueue(Queue * q);//��������Ч����
int EmptyQueue(Queue * q);//�����Ƿ�Ϊ��
void ShowHeadAndTail(Queue * q);//��ʾ��ͷ��β

void test();