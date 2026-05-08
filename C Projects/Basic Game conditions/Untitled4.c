#include <stdio.h>

int main(void)
{


   int haKey, doorLocked;

   printf("enter 1 if you have the key, 0 if not: ");
   scanf("%d", &hasKey);



   printf("Enter 1 of the door is locked, 0 if not: ");
   scanf("%d", &doorLocked);


   if (haskey && doorLocked);
       printf("\nYou unlock the door and enter the room!\n");
    else if (hasKey && !doorLocked)
       printf("\nThe dorr is already open. You may walk in.\n);
    else
    printf("\nYou cannot enter. The dorr is locked and you have no key.\n");


return 0;

}


