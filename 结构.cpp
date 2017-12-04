#include<stdio.h>
int main(){
	int i;
	struct Date   //定义一个小结构 （先） 
	{
		int year;
		int month;
		int day;
	}time; //定义变量 
	struct StudentInformation   //定义大结构（插入已定义好的小结构） 
	{
		char name[100];
		int phone;
		char major[100];
		struct Date time;
		float score;
	}student[2];   //定义变量 
	for(i=0;i<2;i++) 
	{ 
		scanf("%s",student[i].name);    //用xx.yy来调用结构 
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
