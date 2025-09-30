#include <stdio.h>
int main()
{
  int n,first=0,second=1,next,i;

printf("Enter the number of terms:");
scanf("%d",&n);

for (i=0;i<n;++i) {
if (i<=1) {
next=i;
} else {
next =first+second;
first=second;
second=next;
}
printf("%d",next);
//print comma and space if it's not the last term

if (i<n-1) {

printf(",");
} 
}
printf("\n");

return 0;
}


