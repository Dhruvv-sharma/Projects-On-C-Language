// C program to design a Digital Clock
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int hour,minute,second;
    hour=minute=second=0;
    while(1){
        // Clear output Screen
        system("cls");
        // print time in HH : MM : SS format
        printf("%02d:%02d:%02d",hour,minute,second);
        // clear output buffer in GC
        fflush(stdout);
        // increase Second
        second ++;
        //update hour minutes and Second

        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
        sleep(1);
    }
        return 0;
}
