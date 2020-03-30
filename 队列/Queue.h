#pragma once

typedef int DataType;

//链表队列节点结构
typedef struct QNode
{
	struct QNode * next;
	DataType val;

}QNode;
//链表队列队列结构
typedef struct Queue
{
	QNode * head;
	QNode * tail;
	int size; //有效元素个数；

}Queue;

void InitQueue(Queue * q);//初始化队列
void PushQueue(Queue * q,DataType val );//入队；
void PopQueue(Queue * q);//出队
int SizeQueue(Queue * q);//队列中有效个数
int EmptyQueue(Queue * q);//队列是否为空
void ShowHeadAndTail(Queue * q);//显示队头队尾

void test();