#include <stdio.h>
void print_function( char letter );
int ctr;
int counter;
int rumme( void )
{
char star = '*';
char dash = '-';
for (counter = 0 ; counter < 10; counter++ )
{
print_function( star );
print_function( dash );
printf("\n");
}
return 0;
}
void print_function ( char letter )
{
for ( ctr = 0; ctr < 10; ctr++) 
{
printf("%c", letter);
}
}
