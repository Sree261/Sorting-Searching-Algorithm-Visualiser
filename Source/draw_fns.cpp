#include<bits/stdc++.h>
#include<graphics.h>
#include "draw_fns.h"
void create_window(int val){
    char *title;
    if(val==1)
        title="Bubble Sort";
    else if(val==2)
        title="Selection Sort";
    else if(val==3)
        title="Insertion Sort";
    else if(val==4)
        title="Linear Search";
    else if(val==5)
        title="Binary Search";
    initwindow(1000,700,title);
}

void draw(vector<int> &arr,int size){
    int limit=(50*size)+10;
    line(10, 50, limit, 50);
    line(10, 100, limit, 100);
    int x1=10,y1=50,x2=10,y2=100;
    while(x2<=limit){
    line(x1, y1, x2, y2);
    x1+=50;
    x2+=50;
    }

    x1=10;y1=50;x2=60;y2=100;
    int midy=y1+(y2-y1)/2,i=0;
    while(x2<=limit){
    int midx=x1+(x2-x1)/2;
    char cal[4];
    int x=arr[i];
    itoa(x,cal,10);
    outtextxy(midx,midy,cal);
    x1+=50;
    x2+=50;
    i++;
    }
}
