#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int h, m ,s; // hour, minute, second
    int d=1000; // we add a delay of 1000 mlsec and to use in the function sleep
    printf(" set time : \n");
    scanf("%d:%d:%d", &s, &m, &h);
    if (h> 24 || m > 60 || s > 60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while (1) // infinite loop and anyhting inseide will repeat itself to infinity
    {
        s++;
        if (s>59)
        {
            m++;
            s=0;
        }
        if (m>59)
        {
            h++;
            m=0;
        }
        if (h>=24)
        {
            h=0;
        }
        printf("\n clock :");
        printf("\n %02d:%02d:%02d", s,m,h); // to write the time in the format 00:00:00
        sleep(1); //sleeps down the file while loop and make it more like a real clock
        system("clear"); // clears the screen
    }
}
