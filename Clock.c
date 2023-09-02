#include <stdio.h>
#include <windows.h>

        /*****  Clock  *****/

int main()
{
    int hour, minute, second;
    int delay = 1000;/*time delay for 1000 miliseconds*/
    printf("Set time : \n");
    scanf("%d %d %d", &hour, &minute, &second);
    if (hour > 12 || minute > 60 || second > 60)
    {
        printf("ERROR!\n");/*if the user sets invalid time, it will send an ERROR! messege */
        exit(0);
    }
    while (1)/*infinite loop to do a certain task infinity*/
    {
        second ++;
        if (second > 59)
        {
            minute ++;
            second = 0;
        }
        if (minute > 59)
        {
            hour ++;
            minute = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }
        printf("\nClock :");
        printf("%02d:%02d:%02d", hour, minute, second);
        Sleep(delay);/*laggs the execution for 1000 miliseconds and useful for counting times*/
        system("cls");/*cleans the sreen*/
    }
    return 0;
}
