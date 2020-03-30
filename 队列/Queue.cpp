#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


QNode * BuyNewQNode(DataType val)
{
	QNode * newNode = (QNode*)malloc(sizeof(QNode));
	if(NULL==newNode)
	{
		assert(0);
		return NULL;
	}
		newNode->val = val;
		newNode->next = NULL;

		return newNode;
	
}
void InitQueue(Queue * q)//初始化队列
{
	assert(q);
	QNode * newnode = BuyNewQNode(0);//头节点
	q->head = newnode;
	q->tail = newnode;
	q->size = 0;

}
void PushQueue(Queue * q,DataType val )//入队；
{
	assert(q);
	QNode * newNode = BuyNewQNode(val);
	
	q->tail->next =newNode;
	q->tail = newNode;

	q->size++;
}
void PopQueue(Queue * q)//出队
{
	QNode * DelNode = NULL;
	assert(q);
	if(EmptyQueue(q))
		return;
	DelNode = q->head->next;
	q->head->next = DelNode->next;
	q->size--;
	free(DelNode);

}
int SizeQueue(Queue * q)//队列中有效个数
{
	assert(q);
	return q->size;

}
int EmptyQueue(Queue * q)
{
	assert(q);
	return 0 == q->size;
}
void ShowHeadAndTail(Queue * q)
{
	assert(q);
	if(NULL == q)
		return;
	printf("队头 = %d\n",q->head->next->val);
	printf("队头 = %d\n",q->tail->val);


}
void Print(Queue * q)
{
	QNode * cur = q->head->next;
	while(cur)
	{
		printf("%d ->",cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
void test()
{
	Queue q;
	InitQueue(&q);
	PushQueue(&q,1);
	PushQueue(&q,2);
	PushQueue(&q,3);
	PushQueue(&q,4);
	printf("size =%d \n",SizeQueue(&q));
	Print(&q);
	//ShowHeadAndTail(&q);
	PopQueue(&q);
	printf("size =%d\n",SizeQueue(&q));
	//ShowHeadAndTail(&q);
	Print(&q);

}