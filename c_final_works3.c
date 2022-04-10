#include <stdio.h>
#include <ctype.h>

void convertToUpper( char *array );

int main()
{
   char x[] = "i believe i can do it";
   convertToUpper(x);
   printf("%s",x);

   return 0;
}

void convertToUpper( char *array )
{
   while( *array != '\0' )
   {
       if( *( array + 1 ) != ' ' && *array == ' ' )
       {
           *( ++array) = toupper( *(array) );
       }
      ++array;
   }
}
