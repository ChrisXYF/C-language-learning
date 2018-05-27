#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node, *linklist;

linklist creat_tail()
{
	linklist l;
	int x;
	node *r, *pnew;
	l = (linklist)malloc(sizeof(node));
	l->next = NULL;
	r = l;

	printf("\nPliease input X:");
	scanf("%d", &x);

	while (x != 0)
	{
		pnew = (node*)malloc(sizeof(node));
		pnew->data = x;
		pnew->next = NULL;	//你每添加一个节点就要为其后一位初始化为空才能和你后面while(p)对应
		r->next = pnew;
		r = pnew;
		scanf("%d", &x);
	}
	return l;
}

void print(linklist l)
{
	node *p;
	p = l->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}

}
void main()
{
	linklist l;
	l = creat_tail();
	print(l);

}
