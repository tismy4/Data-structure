#include <stdio.h>

void main() {
int list[20], i, item, n, flag = 0;

printf("Enter the length of the list: ");
scanf("%d", &n);


printf("Enter the elements:\n");
for (i = 0; i < n; i++) {
scanf("%d", &list[i]);
}

printf("Enter the item: ");
scanf("%d", &item);

for (i = 0; i < n; i++) {
if (list[i] == item) {
printf("%d present at index %d\n", item, i );
flag = 1;
break;
}
}
   
if (flag == 0) {
printf("Item not present\n"); }
}
return 0;
}
	

