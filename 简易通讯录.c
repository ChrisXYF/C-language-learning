//��ͨѶ¼
#include<stdio.h>
#include<string.h>
struct message
{
	char name[20];
	char tel[20];
	char sort[20];
	char add[20];
}user[200];
int fun1()
{
	int k;
	printf("���������Ĳ���:\n");
	printf("��ѯ,����ĳ�˵绰�� 1\n");
	printf("ɾ��ĳ�˵绰�� 2\n");
	printf("�˳��밴 0\n");
	scanf("%d",&k);
	return k;
}
void search(int n)
{
	int i,j,k,t=0;
	char s[20];
	printf("������ĳ��������");
	scanf("%s",&s);
	for(i=0;i<n;i++)
	{
		if(strcmp(user[i].name,s)==0)
		{
			printf("����:%s �绰:%s ���:%s\n",user[i].name,user[i].tel,user[i].sort);
			printf("�Ƿ����Ӹ��û��ĵ绰��Ϣ?\n ��:������1,��������2\n");
			scanf("%d",&j);
			if(j==1)
			{
				printf("�����������ĵ绰����:");
				scanf("%s",&user[i].add);
				printf("�µ�ͨѶ¼Ϊ:\n");
				for(k=0;k<n;k++)
				{
					printf("����:%s �绰:%s %s ���:%s\n",user[k].name,user[k].tel,user[k].add,user[k].sort);
				}
			}
		}
		else if(strcmp(user[i].name,s)!=0)
		t++;
		if(t==n)
			printf("���޴���");

	}
}
void clear(int n)
{
	int i,j,k,t;
	char s[20];
	printf("������Ҫɾ���˵�������");
	scanf("%s",&s);
	for(i=0;i<n;i++)
	{
		if(strcmp(user[i].name,s)==0)
		{
			printf("ɾ���ˣ�����:%s �绰:%s ���:%s\n",user[i].name,user[i].tel,user[i].sort);

				printf("�µ�ͨѶ¼Ϊ:\n");
				for(k=i;k<n;k++)
					user[k]=user[k+1];
                for(j=0;j<n-1;j++)
					printf("����:%s �绰:%s ���:%s\n",user[j].name,user[j].tel,user[j].sort);
				}
		else if(strcmp(user[i].name,s)!=0)
		t++;
		if(t==n)
			printf("���޴���");

	
	}
}


void main()
{
	int i,j,k,n,t;
	printf("������Ҫ¼���������");
	scanf("%d",&n);
	printf("������Ҫ¼���˵���Ϣ:�������绰�����\n");
	for(i=0;i<n;i++)
	scanf("%s%s%s",&user[i].name,&user[i].tel,&user[i].sort);
	for(j=0;j<n;j++)
	printf("����:%s �绰:%s ���:%s\n",user[j].name,user[j].tel,user[j].sort);
     k=fun1();
	switch(k)
	{ 
	   case 0:break;
	   case 1:search(n);break;
	   case 2:clear(n);break;
	}
	 
}
    