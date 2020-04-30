  #include<stdio.h>
#include<conio.h>

void fs(int first, int second, int term);

int main()
  {
fs(0, 1, 25);
_getch();
return 0;
}

void fs(int fis, int sec, int term)
{
int num;
if (term == 0)
	return;
num = fis + sec;
fis = sec;
sec = num;
printf("%d, ", num);
fs(fis, sec, term - 1);
}

