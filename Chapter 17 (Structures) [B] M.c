#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct marks
{
int j[3];
int tot;
};

	int main()
{
struct marks player[5];
int i, j, max = 0;
for (i = 0; i < 5; i++)
{
	system("cls");
	printf("\n\t\tMarks for player-%d", i + 1);
	for (j = 0; j < 3; j++)
	{
		printf("\nEnter marks entered by judege number %d : ", j + 1);
		scanf("%d", &player[i].j[j]);
	}
	player[i].tot = player[i].j[0] + player[i].j[1] + player[i].j[2];
	if (player[i].tot > max)
		max = player[i].tot;
}
for (i = 0; i < 5; i++)
{
	if (max == player[i].tot)
	{
		printf("\nPlayer number %d is choosen as MVP\n", i + 1);
		_getch();
		return 0;
	}
}
}
