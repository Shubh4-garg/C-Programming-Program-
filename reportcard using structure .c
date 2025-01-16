//Structure  reportcard............
#include <stdio.h>
struct abc {
	int i;
	char a[20];
	int b;
	int c;
	char x[5];
	int m_marks, p_marks, dt_marks, coi_marks;
};
void main() {
	struct abc d;
	printf("Roll No. : ");
	scanf("%d",&d.i);
	printf("Name : ");
	scanf("%s",&d.a);
	printf("Year : ");
	scanf("%d",&d.b);
	printf("semester : ");
	scanf("%d",&d.c);
	printf("Branch : ");
	scanf("%s",&d.x);
	printf("Maths marks : ");
	scanf("%d",&d.m_marks);
	printf("Physics marks : ");
	scanf("%d",&d.p_marks);
	printf("DT marks : ");
	scanf("%d",&d.dt_marks);
	printf("COI marks : ");
	scanf("%d",&d.coi_marks);
}