#include<stdio.h>
int main(){
	int i;
	struct Date   //����һ��С�ṹ ���ȣ� 
	{
		int year;
		int month;
		int day;
	}time; //������� 
	struct StudentInformation   //�����ṹ�������Ѷ���õ�С�ṹ�� 
	{
		char name[100];
		int phone;
		char major[100];
		struct Date time;
		float score;
	}student[2];   //������� 
	for(i=0;i<2;i++) 
	{ 
		scanf("%s",student[i].name);    //��xx.yy�����ýṹ 
		scanf("%d",&student[i].phone);
		scanf("%s",student[i].major);
		scanf("%d%d%d",&student[i].time.year,&student[i].time.month,&student[i].time.day);
		scanf("%f",&student[i].score);		
	} 
	for(i=0;i<2;i++){
		printf("%s\n",student[i].name);
		printf("%d\n",student[i].phone);
		printf("%s\n",student[i].major);
		printf("%d %d %d ",student[i].time.year,student[i].time.month,student[i].time.day);
		printf("%f\n",student[i].score);
	}
	return 0;
}
