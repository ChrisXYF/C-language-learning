//简单通讯录
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
	printf("请输入您的操做:\n");
	printf("查询,增加某人电话按 1\n");
	printf("删除某人电话按 2\n");
	printf("退出请按 0\n");
	scanf("%d",&k);
	return k;
}
void search(int n)
{
	int i,j,k,t=0;
	char s[20];
	printf("请输入某人姓名：");
	scanf("%s",&s);
	for(i=0;i<n;i++)
	{
		if(strcmp(user[i].name,s)==0)
		{
			printf("姓名:%s 电话:%s 类别:%s\n",user[i].name,user[i].tel,user[i].sort);
			printf("是否增加该用户的电话信息?\n 是:请输入1,否则输入2\n");
			scanf("%d",&j);
			if(j==1)
			{
				printf("请输入新增的电话号码:");
				scanf("%s",&user[i].add);
				printf("新的通讯录为:\n");
				for(k=0;k<n;k++)
				{
					printf("姓名:%s 电话:%s %s 类别:%s\n",user[k].name,user[k].tel,user[k].add,user[k].sort);
				}
			}
		}
		else if(strcmp(user[i].name,s)!=0)
		t++;
		if(t==n)
			printf("查无此人");

	}
}
void clear(int n)
{
	int i,j,k,t;
	char s[20];
	printf("请输入要删除人的姓名：");
	scanf("%s",&s);
	for(i=0;i<n;i++)
	{
		if(strcmp(user[i].name,s)==0)
		{
			printf("删除人：姓名:%s 电话:%s 类别:%s\n",user[i].name,user[i].tel,user[i].sort);

				printf("新的通讯录为:\n");
				for(k=i;k<n;k++)
					user[k]=user[k+1];
                for(j=0;j<n-1;j++)
					printf("姓名:%s 电话:%s 类别:%s\n",user[j].name,user[j].tel,user[j].sort);
				}
		else if(strcmp(user[i].name,s)!=0)
		t++;
		if(t==n)
			printf("查无此人");

	
	}
}


void main()
{
	int i,j,k,n,t;
	printf("请输入要录入的人数：");
	scanf("%d",&n);
	printf("请输入要录入人的信息:姓名，电话，类别：\n");
	for(i=0;i<n;i++)
	scanf("%s%s%s",&user[i].name,&user[i].tel,&user[i].sort);
	for(j=0;j<n;j++)
	printf("姓名:%s 电话:%s 类别:%s\n",user[j].name,user[j].tel,user[j].sort);
     k=fun1();
	switch(k)
	{ 
	   case 0:break;
	   case 1:search(n);break;
	   case 2:clear(n);break;
	}
	 
}
    