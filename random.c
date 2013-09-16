#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_str()
{
   static const char text[] = "23456789"
                              "abcdefghkmnpqrstwxyz"
                              "#$?*+[]<>@";
   int i;
   char dst[24];
   for ( i = 0; i < 24; ++i )
   {
      dst[i] = text[rand() % (sizeof text - 1)];
   }
   dst[i] = '\0';
   printf(dst);
   printf("\n");
}

int main (void)
{
   struct timeval tv;
   gettimeofday(&tv, NULL);

   srand(tv.tv_usec);

   int k;
   printf("Pad # %u\n\n",rand());

   for ( k = 1; k <= 20; ++k )
   {
       printf("%i:\t",k);
       rand_str();
       printf("\n");
   }
   return 0;
}
