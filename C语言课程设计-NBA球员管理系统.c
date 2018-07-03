#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<conio.h>

#include<windows.h>

void Colorsetting();

void menu();

void sign();

void process();

void sys_menu();

void choose();

typedef struct nba

{

	char name[20]; //球员姓名

	int num;//球衣号码

	char team[20];//所在球队

	float score;//得分

	float block;//篮板

	float assist;//助攻

	struct nba *next;//指向下一个节点

}nba;
typedef struct NAME

{

	char name[50];

	char pwd[50];

}Name;

nba *savei(nba *head)

{

	FILE *fp;

	nba *p;

	char filmname[40];

	printf("\t完成所有操作后便可存入文件中！\n");

	printf("\n\t输入要保存的文件名：  ");

	scanf("%s", filmname);

	if ((fp = fopen(filmname, "a+")) == NULL)

	{

		printf("\t写文件出错，按任意键退出！");

		getch();

		exit(1);

	}

	for (p = head->next; p != NULL; p = p->next)

	{

		fprintf(fp, "%s %d %s %.1f %.1f %.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);

	}

	fclose(fp);

	printf("\n\t文件已经保存成功！");

	getch();

	return head;

}
int pd(Name signin)

{

	FILE *fp1;

	Name member;

	int flag = 2;

	fp1 = fopen("name.txt", "rt");

	if (fp1 == NULL)

	{

		printf("\t输入无效，按任意键返回注册！\n");

		getch();

		exit(1);

	}

	while (fscanf(fp1, "%s", member.name) != EOF)

	{

		if (strcmp(signin.name, member.name) == 0)

		{

			flag = 0;

			break;

		}

		else if (strcmp(signin.name, member.name) != 0)

		{

			flag = 1;

			continue;

		}

	}

	if (flag == 0)

	{

		return 0;

	}

	else if (flag == 1)

	{

		return 1;

	}

	else if (flag == 2)

	{

		return 1;

	}

}


void sign()

{

	Name signin;

	FILE  *fp1;

	fp1 = fopen("name.txt", "a+");

	if (fp1 == NULL)

	{

		printf("打开失败,按任意键退出！\n");

		exit(1);

	}

	printf("\t请输入用户名：");

	getchar();

	gets(signin.name);

	printf("\n");

	if (pd(signin) == 0)

	{

		printf("\t对不起，您注册的用户名重复，返回重新想一个名字吧");

		getch();

		menu();

	}

	else if (pd(signin) == 1)

	{

		printf("\t请设置密码：");

		gets(signin.pwd);

		fputs(signin.name, fp1);

		fputs(" ", fp1);

		fputs(signin.pwd, fp1);

		fputs("\n", fp1);

		fclose(fp1);

		printf("\t*****注册成功，按任意键返回*****");

		getch();

		menu();

	}

}


void login()

{

	Name log;

	FILE *fp1;

	int i,j=0;

	int flag=0;

	char ch[50],p[50];

	fp1 = fopen("name.txt", "rt");

	printf("\t请输入用户名：");

	getchar();

	gets(ch);

	printf("\t请输入密码：");

	for (i = 0;; i++)

	{

		p[i] = getch();

		switch (p[i])

		{

		case '\b':

			p[--i] = '\0';

			i--;

			printf("\b \b");

			break;

		case '\r':

			p[i] = '\0';

			putchar('\n');

			break;

		default:

			putchar('*');

			break;

		}

		if (p[i] == '\0') break;

	}

	while(fscanf(fp1,"%s %s",log.name,log.pwd)!=EOF)

	{	

		if( strcmp(ch,log.name)==0&&strcmp(p,log.pwd)==0 )

		{	
				flag=1;

				break;
        }
			else if(strcmp(ch,log.name)==0&&strcmp(p,log.pwd)!=0)

			{
				

				flag=0;

				break;

			}

		
		else if(strcmp(ch,log.name)!=0)

		{
             flag=2;	
			continue;
		}

	}

		if(flag==1)

		{

			process();

			sys_menu();

		}

		else if(flag ==0)

		{

			printf("\t密码出错！");

			getch();

			menu();

		}

		else if(flag ==2)

		{

			printf("\t您输入用户名不存在！");

			getch();

			menu();

		}

	

}

void process()

{

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t恭喜登陆成功！老司机开车了，即将进入NBA的世界，系好安全带，出发\n");

	Sleep(1100);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t科比.布莱恩特---==≡≡ ...\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t这球也能进？\n...\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t︿(￣︶￣)︿~ ...\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t这个大火锅结结实实 ...\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t湖人总冠军！)～ !\n");

	Sleep(500);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t哈登晃到了勒布朗！！！...\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t这球走步了 !\n");

	Sleep(500);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\tThis is why we play ! \n");

	printf("\t\t3...\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t2..\n");

	Sleep(400);

	system("cls");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t1.\n");

	Sleep(400);

	system("cls");



	printf("\n\n\n\n\n\n\n");

	printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf("\t\t~********************************************************************************~\n");

	printf("\t\t~  *      *      *  * * * *  *        * * *    * * *       *     *     * * * *   ~\n");

	printf("\t\t~  *      *      *  *        *       *       *       *    * *   * *    *         ~\n");

	printf("\t\t~   *     *     *   * * * *  *      *       *         *  *   * *   *   * * * *   ~\n");

	printf("\t\t~    *  *   *  *    *        *       *       *       *  *     *     *  *         ~\n");

	printf("\t\t~     *       *     * * * *  * * * *  * * *    * * *    *     *     *  * * * *   ~\n");

	printf("\t\t~********************************************************************************~\n");

	printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	Sleep(1200);

	printf("\n\n\n\n\n\n\n");

	system("cls");

	sys_menu();

}

nba *input()

{

	nba *p;

	nba *q, *s;

	int x, i = 0;

	system("cls");

	p = (nba *)malloc(sizeof(nba));

	p->next = NULL;

	q = p;



	printf("请输入球员数量: ");

	scanf("%d", &x);

	do

	{

		s = (nba*)malloc(sizeof(nba));

		printf("\t\t***********请输入球员信息***********\n");

		printf("第%d个球员信息:\n", i + 1);

		printf("  球员姓名: ");

		scanf("%s", s->name);

		printf("  号码: ");

		scanf("%d", &s->num);

		printf("  所在球队: ");

		scanf("%s", s->team);

		printf("  生涯场均得分：");

		scanf("%f", &s->score);

		printf("  生涯场均篮板: ");

		scanf("%f", &s->block);

		printf("  生涯场均助攻: ");

		scanf("%f", &s->assist);

		q->next = s;

		q = s;

		s->next = NULL;

		i++;

	} while (i<x);

	printf("\n\t\t恭喜你，录入完毕~~^O^");

	getch();

	return p;

}

nba *print(nba *head)

{

	nba *p = head->next;

	printf("\n\n                              --球员信息--                                            \n\n");

	printf("\t------------------------------------------------------------------------------------------\n");

	printf("\t姓名------------号码-------------球队-----------得分------------篮板-------------助攻-----\n");

	while (p)

	{

		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);

		p = p->next;

	}

	printf("\n          按任意键返回！");

	getch();

	return head;

}

nba *print2(nba *head)

{

	system("cls");

	nba *p = head->next;

	printf("\n\n --得分榜排名--\n\n");

	printf("\t-------------------\n");

	printf("\t姓名-----------得分\n");

	while (p)

	{

		printf("\t%-17s%-16.1f\n", p->name, p->score);

		p = p->next;

	}

	printf("\n          按任意键返回！");

	getch();

	return head;

}

nba *print3(nba *head)

{

	system("cls");

	nba *p = head->next;

	printf("\n\n --篮板排名--\n\n");

	printf("\t-------------------\n");

	printf("\t姓名-----------篮板\n");

	while (p)

	{

		printf("\t%-17s%-16.1f\n", p->name, p->block);

		p = p->next;

	}

	printf("\n          按任意键返回！");

	getch();

	return head;

}

nba *print4(nba *head)

{

	system("cls");

	nba *p = head->next;

	printf("\n\n --助攻榜排名--\n\n");

	printf("\t-------------------\n");

	printf("\t姓名-----------得分\n");

	while (p)

	{

		printf("\t%-17s%-16.1f\n", p->name, p->assist);

		p = p->next;

	}

	printf("\n          按任意键返回！");

	getch();

	return head;

}

nba *del(nba *head)

{

	nba *q;

	nba *p = head;

	q = head->next;

	char id[20];

	printf("\n请输入要删除的球员姓名：");

	scanf("%s", &id);

	while (q)

	{

		if (strcmp(q->name, id) == 0)

		{

			p->next = q->next;

			free(q);

			q = p->next;

		}

		else

		{

			p = p->next;

			q = q->next;

		}

	}

	printf("\n删除完成!!");

	getch();

	return head;

}

nba *search(nba *head)

{

	system("cls");

	nba *p;

	p = head;

	char id[20];

	printf("\n请输入要查询的球星名字: ");

	scanf("%s", &id);

	while (strcmp(p->name, id) != 0 && p)

	{

		p = p->next;

	}

	if (p != NULL)

	{

		printf("\n\n                              --球员信息--                                            \n\n");

		printf("\t------------------------------------------------------------------------------------------\n");

		printf("\t姓名------------号码-------------球队-----------得分------------篮板-------------助攻-----\n");

		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);

	}

	else

	{

		printf("\n\t未查询到该球员的信息，请检查是否输入正确。");

	}

	printf("\n\t按任意键返回！");

	getch();

	return head;

}

nba *rank1(nba *head)

{

	nba *p, *q, *t;

	t = NULL;

	while (t != head->next)

	{

		p = head;

		q = p->next;

		while (q->next != t)

		{

			if (p->next->score<q->next->score)

			{

				p->next = q->next;

				q->next = q->next->next;

				p->next->next = q;

			}

			p = p->next;

			q = p->next;

		}

		t = q;

	}

	print2(head);

	return(head);

}

nba *rank2(nba *head)

{

	nba *p, *q, *t;

	t = NULL;

	while (t != head->next)

	{

		p = head;

		q = p->next;

		while (q->next != t)

		{

			if (p->next->block<q->next->block)

			{

				p->next = q->next;

				q->next = q->next->next;

				p->next->next = q;

			}

			p = p->next;

			q = p->next;

		}

		t = q;

	}

	print3(head);

	return(head);

}

nba *rank3(nba *head)

{

	nba *p, *q, *t;

	t = NULL;

	while (t != head->next)

	{

		p = head;

		q = p->next;

		while (q->next != t)

		{

			if (p->next->assist<q->next->assist)

			{

				p->next = q->next;

				q->next = q->next->next;

				p->next->next = q;

			}

			p = p->next;

			q = p->next;

		}

		t = q;

	}

	print4(head);

	return(head);

}

nba *change(nba *head)

{

	system("cls");

	nba *p = head;

	int choice;

	char id[20];

	printf("\n\t请输入要修改的球员姓名：\n");

	scanf("%s", &id);

	while (p&&strcmp(p->name, id) != 0)

	{

		p = p->next;

	}

	if (p)

	{

		printf("\n\n                              --球员信息--                                            \n\n");

		printf("\t------------------------------------------------------------------------------------------\n");

		printf("\t姓名------------号码-------------球队-----------得分------------篮板-------------助攻-----\n");

		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);

		printf("\n\n");

		printf("\t┏━━━━━━━━请选择修改的选项━━━━━━━━┓\n");

		printf("\t┃┄┄┄┄┄┄┄┄┄1.球员名称┄┄┄┄┄┄┄┄┄┄┃\n");

		printf("\t┃┄┄┄┄┄┄┄┄┄2.球员号码┄┄┄┄┄┄┄┄┄┄┃\n");

		printf("\t┃┄┄┄┄┄┄┄┄┄3.球员所在球队┄┄┄┄┄┄┄┄┃\n");

		printf("\t┃┄┄┄┄┄┄┄┄┄4.球员场均得分┄┄┄┄┄┄┄┄┃\n");

		printf("\t┃┄┄┄┄┄┄┄┄┄5.球员场均篮板┄┄┄┄┄┄┄┄┃\n");

		printf("\t┃┄┄┄┄┄┄┄┄┄6.球员场均助攻┄┄┄┄┄┄┄┄┃\n");

		printf("\t┗━━━━━━━━━━━━━━━━━━━━━━━━┛\n");

		printf("\n请选则您要进行的修改项：");

		scanf("%d", &choice);

		switch (choice)

		{

		case 1:printf("\n                   请输入修改后的姓名:");

			scanf("%s", p->name); break;

		case 2:printf("\n                   请输入修改后的号码:");

			scanf("%d", &p->num); break;

		case 3:printf("\n                   请输入修改后的队伍:");

			scanf("%s", p->team); break;

		case 4:printf("\n                   请输入修改后的得分:");

			scanf("%f", &p->score); break;

		case 5:printf("\n                   请输入修改后的篮板:");

			scanf("%f", &p->block); break;

		case 6:printf("\n                   请输入修改后的助攻:");

			scanf("%f", &p->assist); break;

		}

		printf("\n\n恭喜你，修改成功");

		printf("\n\n                              --球员信息--                                            \n\n");

		printf("\t------------------------------------------------------------------------------------------\n");

		printf("\t姓名------------号码-------------球队-----------得分------------篮板-------------助攻-----\n");

		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);

	}

	printf("\n                        按任意键返回！");

	getch();

	return head;

}

nba *readi()

{

	nba *head, *q, *p;

	FILE *fp;

	char filmname[40];

	printf("\t输入要打开的文件名：   ");

	scanf("%s", filmname);

	if ((fp = fopen(filmname, "rt")) == NULL)

	{

		printf("\t打开文件有错，按任意键退出！");

		getch();

		exit(1);

	}

	head = (nba *)malloc(sizeof(nba));

	head->next = NULL;

	q = head;

	while (!feof(fp)) {

		p = (nba *)malloc(sizeof(nba));

		fscanf(fp, "%s %d %s %f %f %f\n", p->name, &p->num, p->team, &p->score, &p->block, &p->assist);

		q->next = p;

		q = p;

	}

	q->next = NULL;
	printf("\n\t文件已读出，按任意键显示！");

	fclose(fp);

	getch();

	return head;

}



void sys_menu()

{

	nba *head = NULL;

	int choice;

	do

	{

		system("cls");

		printf("\n\n");

		printf("\t┌────────────────────────────────┐\n");

		printf("\t│                欢迎来到NBA球员管理系统！！                     │\n");

		printf("\t│-------------------This is why we play! ----------------------  │\n");

		printf("\t│                    1-  录入球员信息                            │\n");

		printf("\t│                    2-  修改球员信息                            │\n");

		printf("\t│                    3-  删除球员信息                            │\n");

		printf("\t│                    4-  查询球员信息                            │\n");

		printf("\t│                    5-  展示所有球员信息                        │\n");

		printf("\t│                    6-  得分排名                                │\n");

		printf("\t│                    7-  篮板排行                                │\n");

		printf("\t│                    8-  助攻排行                                │\n");

		printf("\t│                    9-  查看已存球员信息                        │\n");

		printf("\t│                    10- 录入完记得保存                          │\n");

		printf("\t│                    0-  退出程序                                │\n");

		printf("\t└────────────────────────────────┘\n");

		printf("\t注意:在未输入任何信息前,只能查看已存信息\n");

		printf("\t欢迎使用NBA球星管理系统，请选择功能0-10：  ");

		scanf("%d", &choice);

		switch (choice)

		{

		case 1:head = input();       break;

		case 2:head = change(head);  break;

		case 3:del(head);          break;

		case 4:search(head);       break;

		case 5:head = print(head);   break;

		case 6:head = rank1(head);   break;

		case 7:head = rank2(head);   break;

		case 8:head = rank3(head);   break;

		case 9:head = readi(); head = print(head);    break;

		case 10:savei(head);        break;
		}

		if (choice == 0)

			menu();

	} while (choice != 0);

}
void menu()

{

	int choice;

	system("cls");

	printf("\n\n");

	printf("\t\t|------------------------------|\n");

	printf("\t\t|--欢迎来到NBA球员管理系统^-^--|\n");

	printf("\t\t|---Basketball Never Stop!-----|\n");

	printf("\t\t|------------------------------|\n");

	printf("\t\t|---------注册-请按1-----------|\n");

	printf("\t\t|---------登陆-请按2-----------|\n");

	printf("\t\t|---------退出-请按0-----------|\n");

	printf("\t\t|------------------------------|\n");

	printf("\t请输入您的选择: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 0:printf("\t\t您已成功退出！欢迎下次再来！\n"); exit(0);

	case 1:sign(); break;

	case 2:login(); break;

	default:printf("\t\t您输入有误哟~请重新选择^o^ \n"); getch(); menu();

	}
}
main()

{

	nba *head = NULL;

	choose();

	//Colorsetting();

	//menu();

}

void choose()

{

	int x;

	system("cls");

	printf("\n\n");

	printf("\t\t在开始之前你想要焕身帅气的皮肤吗？>_<\n");

	printf("\n");

	printf("\t\t如果想，请输入1进入换肤界面，如果对现在的皮肤满意的话，那就戳0进入开始界面吧!\n");

	printf("\n");

	printf("\t\t请输入您的选择: ");

	scanf("%d", &x);

	switch (x)

	{

	case 1: Colorsetting(); break;

	case 0: menu(); break;

	default: printf("\t\t对不起，您输入有误，请重新开始!"); getch(); choose();

	}

}

void Colorsetting()

{

	int a;

	char choice;

	system("cls");

	printf("\n\n");

	printf("\t┏━━━请选择一下您的背景━━━┓\n");

	printf("\t┣┄┄┄┄1.红底黑字┄┄┄┄┄┄┫\n");

	printf("\t┣┄┄┄┄2.白底黑字┄┄┄┄┄┄┫\n");

	printf("\t┣┄┄┄┄3.黑底红字┄┄┄┄┄┄┫\n");

	printf("\t┣┄┄┄┄4.绿底蓝字┄┄┄┄┄┄┫\n");

	printf("\t┣┄┄┄┄5.黄底紫字┄┄┄┄┄┄┫\n");

	printf("\t┣┄┄┄┄6.系统默认┄┄┄┄┄┄┫\n");

	printf("\t┗━━━━━━━━━━━━━━━┛\n");

	printf("\n\t请输入你喜欢的颜色<1-6>:   ");

	scanf("%d", &a);

	switch (a)

	{

	case 1:

		system("color 40");

		break;

	case 2:

		system("color 70");

		break;

	case 3:

		system("color 04");

		break;

	case 4:

		system("color 21");

		break;

	case 5:

		system("color 65");

		break;

	case 6:

		system("color 1a");

		break;

	default:

		printf("\n\t输入无效,请重新输入\n");

		getch();

		Colorsetting();

	}

	printf("\n\n\t皮肤不行，换换就行，回车继续换\n\t或者<<按y'进入主界面>>\n");

	fflush(stdin);

	printf("\t");

	scanf("%c", &choice);

	if (choice == 'Y' || choice == 'y')

	{

		system("cls");

		menu();

	}

	else

	{

		Colorsetting();

	}

}
