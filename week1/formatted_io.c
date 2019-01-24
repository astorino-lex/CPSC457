#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.141592

int main () {
    int day, year;
    char weekday[20], month[20], dtm[100], result[100];

    strcpy( dtm, "Saturday March 25 1989" );
    sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

    printf("%s %d, %d = %s\n", month, day, year, weekday );

    double deg = 45;
    sprintf(result, "cosine of %lf degrees is %lf\n", 
					deg, cos(deg * PI / 180.0));
    puts(result);

    return(0);
}
