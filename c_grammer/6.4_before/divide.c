#include <stdio.h>
int main(void)
{
    printf("integer division: 5/4 is %d \n", 5/4);
    printf("integer division: 8/4 is %d \n", 8 / 4);
    printf("integer division: 5./4 is %.2f \n", 5. / 4);
    printf("integer division: 5./4. is %.2f \n", 5. / 4.);
    float butter;
    butter = 25. + 60. * 6. / 2.;
    printf("%f", butter);
    return 0;
}