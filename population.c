#include <cs50.h>
#include <stdio.h>
int Duration_period(long start_size, long end_size);
long get_end_size(void);
long get_start_size(void);

int main(void)

{

 
    // Get start size

    long start = get_start_size();

    // Get End size
    long end = get_end_size();

    // Get Number of years
    int years = Duration_period(start, end);

    printf("Years: %i\n", years);
}

long get_start_size(void)
{
    long start_size;

    do
    {
        start_size = get_long("Start size: ");
    }
     while (start_size < 1 );
    
    return start_size;
}

long get_end_size(void)
{
    long end_size;
    do
    {
        end_size = get_long("End size: ");

    } while (end_size < 1);

    return end_size;
}


int Duration_period(long start_size, long end_size)
{
    int years = 0;
    long start = start_size;

    while(start < end_size)
    {
        years++;;
        start = (start + (start / 3) - (start / 4));
    }

    return years;
}