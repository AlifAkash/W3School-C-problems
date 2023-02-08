/*
    Write a C program to find the angle between (12:00 to 11:59) the hour hand and the minute hand of a clock.
    The hour hand and the minute hand is always among 0 degree and 180 degree. For example, when
    it's 12 o'clock, the angle of the two hands is 0 while 3:00 is 45 degree and 6:00 is 180 degree.
    Sample Output:
    Input hour(h) and minute(m) (separated by a space):
    The angle is -23076408.0 degrees at 0:4195776.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    float h, m, y, angle;

    printf("Input hour(h) and minute(m) (separated by a space): ");
    scanf("%f %f", &h, &m);

    if(h<=12)
    {
        angle = (h*30+m*0.5)-(m*6);
        angle = abs(angle);

        if(angle>180)
        {
            angle = 360-angle;
        }

        printf("The angle is %0.1f degrees at %d:%d.", angle, (int)h,(int)m);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}
