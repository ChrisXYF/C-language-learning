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
	char name[20]; //��Ա����
	int num;//���º���
	char team[20];//�������
	float score;//�÷�
	float block;//����
	float assist;//����
	struct nba *next;//ָ����һ���ڵ�
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
	printf("\t������в������ɴ����ļ��У�\n");
	printf("\n\t����Ҫ������ļ�����  ");
	scanf("%s", filmname);
	if ((fp = fopen(filmname, "a+")) == NULL)
	{
		printf("\tд�ļ�������������˳���");
		getch();
		exit(1);
	}
	for (p = head->next; p != NULL; p = p->next)
	{
		fprintf(fp, "%s %d %s %.1f %.1f %.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);
	}
	fclose(fp);
	printf("\n\t�ļ��Ѿ�����ɹ���");
	getch();
	return head;
}

void sign()
{
	Name signin;
	FILE  *fp1;
	fp1 = fopen("name.txt", "a+");
	if (fp1 == NULL)
	{
		printf("��ʧ��,��������˳���\n");
		exit(1);
	}
	printf("\t�������û�����");
	getchar();
	gets(signin.name);
	printf("\n");
	if (pd(signin) == 0)
	{
		printf("\t�Բ�����ע����û����ظ�������������һ�����ְ�");
		getch();
		menu();
	}
	else if (pd(signin) == 1)
	{
		printf("\t���������룺");
		gets(signin.pwd);
		fputs(signin.name, fp1);
		fputs(" ", fp1);
		fputs(signin.pwd, fp1);
		fputs("\n", fp1);
		fclose(fp1);
		printf("\t*****ע��ɹ��������������*****");
		getch();
		menu();
	}
}
int pd(Name signin)
{
	FILE *fp1;
	Name member;
	int flag = 2;
	fp1 = fopen("name.txt", "rt");
	if (fp1 == NULL)
	{
		printf("\t������Ч�������������ע�ᣡ\n");
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
int pd2(Name signin)
{
	FILE *fp1;
	Name member;
	int flag = 2;
	fp1 = fopen("name.txt", "rt");
	if (fp1 == NULL)
	{
		printf("\t������Ч�������������ע�ᣡ\n");
		getch();
		exit(1);
	}
	while (fscanf(fp1, "%s", member.pwd) != EOF)
	{
		if (strcmp(signin.pwd, member.pwd) == 0)
		{
			flag = 0;
			break;
		}
		else if (strcmp(signin.pwd, member.pwd) != 0)
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
void login()
{
	Name log;
	FILE *fp1;
	int i;
	char ch;
	fp1 = fopen("name.txt", "rt");
	printf("\t�������û�����");
	getchar();
	gets(log.name);
	printf("\t���������룺");
	for (i = 0;; i++)
	{
		log.pwd[i] = getch();
		switch (log.pwd[i])
		{
		case '\b':
			log.pwd[--i] = '\0';
			i--;
			printf("\b \b");
			break;
		case '\r':
			log.pwd[i] = '\0';
			putchar('\n');
			break;
		default:
			putchar('*');
			break;
		}
		if (log.pwd[i] == '\0') break;
	}
	if (pd(log) == 0)
	{
		if (pd2(log) == 0)
		{
			process();
		}
		else if (pd2(log) == 1)
		{
			printf("\t�Բ���������������������������\n");
			getch();
			menu();
		}
	}
	else if (pd(log) == 1)
	{
		printf("\t�Բ����������û���������\n");
		getch();
		menu();
	}
}
void process()
{
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t��ϲ��½�ɹ�����˾�������ˣ���������NBA�����磬ϵ�ð�ȫ��������\n");
	Sleep(1200);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t�Ʊ�.��������---==�ԡ� ...\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t����Ҳ�ܽ���(((?'w')? ?'w')-o��\n...\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t��(�����)��~ ...\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t����������ʵʵ ...\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t�������������)�� !\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t���ǻε����ղ��ʣ�����...\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t�����߲��� !\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\tThis is why we play ! \n");
	printf("\t\t3...\n");
	Sleep(500);
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

	printf("��������Ա����: ");
	scanf("%d", &x);
	do
	{
		s = (nba*)malloc(sizeof(nba));
		printf("\t\t***********��������Ա��Ϣ***********\n");
		printf("��%d����Ա��Ϣ:\n", i + 1);
		printf("  ��Ա����: ");
		scanf("%s", s->name);
		printf("  ����: ");
		scanf("%d", &s->num);
		printf("  �������: ");
		scanf("%s", s->team);
		printf("  ���ĳ����÷֣�");
		scanf("%f", &s->score);
		printf("  ���ĳ�������: ");
		scanf("%f", &s->block);
		printf("  ���ĳ�������: ");
		scanf("%f", &s->assist);
		q->next = s;
		q = s;
		s->next = NULL;
		i++;
	} while (i<x);
	printf("\n\t\t��ϲ�㣬¼�����~~^O^");
	getch();
	return p;
}
nba *print(nba *head)
{
	nba *p = head->next;
	printf("\n\n                              --��Ա��Ϣ--                                            \n\n");
	printf("\t------------------------------------------------------------------------------------------\n");
	printf("\t����------------����-------------���-----------�÷�------------����-------------����-----\n");
	while (p)
	{
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);
		p = p->next;
	}
	printf("\n          ����������أ�");
	getch();
	return head;
}
nba *print2(nba *head)
{
	system("cls");
	nba *p = head->next;
	printf("\n\n --�÷ְ�����--\n\n");
	printf("\t-------------------\n");
	printf("\t����-----------�÷�\n");
	while (p)
	{
		printf("\t%-17s%-16.1f\n", p->name, p->score);
		p = p->next;
	}
	printf("\n          ����������أ�");
	getch();
	return head;
}
nba *print3(nba *head)
{
	system("cls");
	nba *p = head->next;
	printf("\n\n --��������--\n\n");
	printf("\t-------------------\n");
	printf("\t����-----------����\n");
	while (p)
	{
		printf("\t%-17s%-16.1f\n", p->name, p->block);
		p = p->next;
	}
	printf("\n          ����������أ�");
	getch();
	return head;
}
nba *print4(nba *head)
{
	system("cls");
	nba *p = head->next;
	printf("\n\n --�÷ְ�����--\n\n");
	printf("\t-------------------\n");
	printf("\t����-----------�÷�\n");
	while (p)
	{
		printf("\t%-17s%-16.1f\n", p->name, p->assist);
		p = p->next;
	}
	printf("\n          ����������أ�");
	getch();
	return head;
}
nba *del(nba *head)
{
	nba *q;
	nba *p = head;
	q = head->next;
	char id[20];
	printf("\n������Ҫɾ������Ա������");
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
	printf("\nɾ�����!!");
	getch();
	return head;
}
nba *search(nba *head)
{
	system("cls");
	nba *p;
	p = head;
	char id[20];
	printf("\n������Ҫ��ѯ����������: ");
	scanf("%s", &id);
	while (strcmp(p->name, id) != 0 && p)
	{
		p = p->next;
	}
	if (p != NULL)
	{
		printf("\n\n                              --��Ա��Ϣ--                                            \n\n");
		printf("\t------------------------------------------------------------------------------------------\n");
		printf("\t����------------����-------------���-----------�÷�------------����-------------����-----\n");
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);
	}
	else
	{
		printf("\n\tδ��ѯ������Ա����Ϣ�������Ƿ�������ȷ��");
	}
	printf("\n\t����������أ�");
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
	printf("\n\t������Ҫ�޸ĵ���Ա������\n");
	scanf("%s", &id);
	while (p&&strcmp(p->name, id) != 0)
	{
		p = p->next;
	}
	if (p)
	{
		printf("\n\n                              --��Ա��Ϣ--                                            \n\n");
		printf("\t------------------------------------------------------------------------------------------\n");
		printf("\t����------------����-------------���-----------�÷�------------����-------------����-----\n");
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);
		printf("\n\n");
		printf("\t��������������������ѡ���޸ĵ�ѡ�����������������\n");
		printf("\t��������������������1.��Ա���Ʃ���������������������\n");
		printf("\t��������������������2.��Ա���멨��������������������\n");
		printf("\t��������������������3.��Ա������ө�����������������\n");
		printf("\t��������������������4.��Ա�����÷֩�����������������\n");
		printf("\t��������������������5.��Ա�������婨����������������\n");
		printf("\t��������������������6.��Ա��������������������������\n");
		printf("\t����������������������������������������������������\n");
		printf("\n��ѡ����Ҫ���е��޸��");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:printf("\n                   �������޸ĺ������:");
			scanf("%s", p->name); break;
		case 2:printf("\n                   �������޸ĺ�ĺ���:");
			scanf("%d", &p->num); break;
		case 3:printf("\n                   �������޸ĺ�Ķ���:");
			scanf("%s", p->team); break;
		case 4:printf("\n                   �������޸ĺ�ĵ÷�:");
			scanf("%f", &p->score); break;
		case 5:printf("\n                   �������޸ĺ������:");
			scanf("%f", &p->block); break;
		case 6:printf("\n                   �������޸ĺ������:");
			scanf("%f", &p->assist); break;
		}
		printf("\n\n��ϲ�㣬�޸ĳɹ�");
		printf("\n\n                              --��Ա��Ϣ--                                            \n\n");
		printf("\t------------------------------------------------------------------------------------------\n");
		printf("\t����------------����-------------���-----------�÷�------------����-------------����-----\n");
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", p->name, p->num, p->team, p->score, p->block, p->assist);
	}
	printf("\n                        ����������أ�");
	getch();
	return head;
}
nba *readi()
{
	nba *head, *q, *p;
	FILE *fp;
	char filmname[40];
	printf("\t����Ҫ�򿪵��ļ�����   ");
	scanf("%s", filmname);
	if ((fp = fopen(filmname, "rt")) == NULL)
	{
		printf("\t���ļ��д���������˳���");
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
	printf("\n\t�ļ��Ѷ��������������ʾ��");
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
		printf("\t��������������������������������������������������������������������\n");
		printf("\t��                ��ӭ����NBA��Ա����ϵͳ����                     ��\n");
		printf("\t��-------------------This is why we play! ----------------------  ��\n");
		printf("\t��                    1-  ¼����Ա��Ϣ                            ��\n");
		printf("\t��                    2-  �޸���Ա��Ϣ                            ��\n");
		printf("\t��                    3-  ɾ����Ա��Ϣ                            ��\n");
		printf("\t��                    4-  ��ѯ��Ա��Ϣ                            ��\n");
		printf("\t��                    5-  չʾ������Ա��Ϣ                        ��\n");
		printf("\t��                    6-  �÷�����                                ��\n");
		printf("\t��                    7-  ��������                                ��\n");
		printf("\t��                    8-  ��������                                ��\n");
		printf("\t��                    9-  �鿴�Ѵ���Ա��Ϣ                        ��\n");
		printf("\t��                    10- ¼����ǵñ���                          ��\n");
		printf("\t��                    0-  �˳�����                                ��\n");
		printf("\t��������������������������������������������������������������������\n");
		printf("\tע��:��δ�����κ���Ϣǰ,ֻ�ܲ鿴�Ѵ���Ϣ\n");
		printf("\t��ӭʹ��NBA���ǹ���ϵͳ����ѡ����0-5��  ");
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
	printf("\t\t|--��ӭ����NBA��Ա����ϵͳ^-^--|\n");
	printf("\t\t|---Basketball Never Stop!-----|\n");
	printf("\t\t|------------------------------|\n");
	printf("\t\t|---------ע��-�밴1-----------|\n");
	printf("\t\t|---------��½-�밴2-----------|\n");
	printf("\t\t|---------�˳�-�밴0-----------|\n");
	printf("\t\t|------------------------------|\n");
	printf("\t����������ѡ��: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 0:printf("\t\t���ѳɹ��˳�����ӭ�´�������\n"); exit(0);
	case 1:sign(); break;
	case 2:login(); break;
	default:printf("\t\t����������Ӵ~������ѡ��^o^ \n"); getch(); menu();
	}

}


main()
{
	nba *head = NULL;
	choose();
	Colorsetting();
	menu();
}
void choose()
{
	int x;
	system("cls");
	printf("\n\n");
	printf("\t\t�ڿ�ʼ֮ǰ����Ҫ����˧����Ƥ����>_<\n");
	printf("\n");
	printf("\t\t����룬������1���뻻�����棬��������ڵ�Ƥ������Ļ����Ǿʹ�0���뿪ʼ�����!\n");
	printf("\n");
	printf("\t\t����������ѡ��: ");
	scanf("%d", &x);
	switch (x)
	{
	case 1: Colorsetting(); break;
	case 0: menu(); break;
	default: printf("\t\t�Բ������������������¿�ʼ!"); getch(); choose();
	}
}
void Colorsetting()
{
	int a;
	char choice;
	system("cls");
	printf("\n\n");
	printf("\t����������ѡ��һ�����ı�����������\n");
	printf("\t�ǩ�������1.��׺��֩�������������\n");
	printf("\t�ǩ�������2.�׵׺��֩�������������\n");
	printf("\t�ǩ�������3.�ڵ׺��֩�������������\n");
	printf("\t�ǩ�������4.�̵����֩�������������\n");
	printf("\t�ǩ�������5.�Ƶ����֩�������������\n");
	printf("\t�ǩ�������6.ϵͳĬ�ϩ�������������\n");
	printf("\t����������������������������������\n");
	printf("\n\t��������ϲ������ɫ<1-6>:   ");
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
		printf("\n\t������Ч,����������\n");
		getch();
		Colorsetting();
	}
	printf("\n\n\tƤ�����У��������У��س�������\n\t����<<��y'����������>>\n");
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

