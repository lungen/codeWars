/*
 * sequence_sum (2,2,2);  => 2  
 * sequence_sum (2,6,2);  => 12 -> 2 + 4 + 6   
 * sequence_sum (1,5,1);  => 15 -> 1 + 2 + 3 + 4 + 5 
 * sequence_sum (1,5,3);  => 5 -> 1 + 4
 */

unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
    unsigned sum = 0;;

    while(start<= end)
    {
        sum += start;
        start += step;
    }
    printf("\nsum: %i", sum);

    return 0;
}

int main()
{
    sequence_sum(2, 2, 2);
  sequence_sum (2,6,2);
  sequence_sum (1,5,1);
  sequence_sum (1,5,3);
    return 0;
}
