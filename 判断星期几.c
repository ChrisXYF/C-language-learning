//判断某一天星期几
#include<stdio.h>
#include<string.h>
struct alldate
{
	int year;
	int month;
	int day;
}date;
void main()
{
   enum weekday {Sunday=0,Tuesday,Wednesday,Thursday,Friday,Saturday,Monday};
   enum weekday d1;
   int temp;
   char str[10];
   printf("请输入日期：");
   scanf("%d",&date.year);
   scanf("%d",&date.month);
   scanf("%d",&date.day);
   if((date.month==1)||(date.month==2))
   {
	   date.month+=12;
	   date.year--;
   }
   temp=(date.day+2*date.month+3*(date.month+1)/5+date.year+date.year/4-date.year/100+date.year/400)%7;
   d1=(enum weekday)temp;
   switch(d1)
   {
   case Sunday:
		   strcpy(str,"Sunday\n");break;
   case Monday:
		   strcpy(str,"monday\n");break;
   case Tuesday:
		   strcpy(str,"Tuesday\n");break;
   case Wednesday:
		   strcpy(str,"Wednesday\n");break;
   case Thursday:
		   strcpy(str,"Thursday\n");break;
   case Friday:
		   strcpy(str,"Friday\n");break;
   case Saturday:
		   strcpy(str,"Saturday\n");break;
   }
   printf("%s",str);
}