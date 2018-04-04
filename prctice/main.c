#include <stdio.h>

int main (void)
{
   for( int huy= 2; huy<=6967; huy++ )//huy
    {
        long long int i=3;
        for( int j=2; j<=huy; j++)
        {
            i*=3;
            
            
           
        }
        i=i%19;
     printf ("%lld\n", i );
    }
    return 0;
}
// na huyu vertel yeto govno
