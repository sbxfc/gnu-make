
#include "print_time.h"
#include <stdio.h>
#include <sys/time.h>

void print_sys_time(){
    time_t tt;
    char tmpbuf[80];
    tt=time(NULL);
    strftime(tmpbuf,80,"%Y-%m-%d %H:%M:%S\n",localtime(&tt));
    printf("%s",tmpbuf);
}
