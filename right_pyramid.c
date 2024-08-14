#include <stdio.h>
int main()
{
int rows,i,j,k;
printf("number of rows: ");
scanf("%d", &rows);
printf("\n");
for (i = 1; i <= rows; i++) {
for (j = i; j <= rows; j++) {
printf(" ");
}
for(k=1;k <= i;k++){
printf("*");
}
printf("\n");
}
return 0;
}

