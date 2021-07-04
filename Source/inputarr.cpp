#include<bits/stdc++.h>
#include "inputarr.h"
#include "searcharr.h"
#include "sortarr.h"
#include "graphics.h"

using namespace std;
void ip:: create_window(int val){
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

void ip:: draw(vector<int> &arr,int size){
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
void ip::ip_arr(vector<int>&arr)
{
    int size,temp;
    cout<<"\n Enter size:";
    cin>>size;
    cout<<"\n Enter array elements separated by space:";
    for(int i=0;i<size;i++){
        cin>>temp;
        arr.push_back(temp);
    }
}

void ip::selectsort()
{
    system("CLS");
    int ch;
    vector<int>arr;
    cout<<"\n SORTING MENU ";
    cout<<"\n\n 1. Bubble sort ";
    cout<<"\n 2. Selection sort ";
    cout<<"\n 3. Insertion sort ";
    cout<<"\n\n Enter your choice: ";
    cin>>ch;
    sortarr x;
    switch(ch)
    {
        case 1:
            ip_arr(arr);
            x.bub_text();
            system("pause");
            create_window(1);
            draw(arr,arr.size());
            x.bubblesort(arr);
            getch();
            closegraph();
        break;

        case 2:
            ip_arr(arr);
            x.sele_text();
            system("pause");
            create_window(2);
            draw(arr,arr.size());
            x.selectionsort(arr);
            getch();
            closegraph();
        break;

        case 3:
            ip_arr(arr);
            x.ins_text();
            system("pause");
            create_window(3);
            draw(arr,arr.size());
            x.insertionsort(arr);
            getch();
            closegraph();
        break;

        default:
        cout<<"\n Invalid choice ";
        break;
    }
}


void ip::selectsearch()
{
    system("CLS");
    int ch,ele;
    vector<int>arr;
    cout<<"\n SEARCHING MENU ";
    cout<<"\n\n 1. Linear search ";
    cout<<"\n 2. Binary search ";
    cout<<"\n\n Enter your choice: ";
    cin>>ch;
    searcharr obj;

    switch(ch)
    {
        case 1:
            ip_arr(arr);
            cout<<"\n Enter Element to be searched:";
            cin>>ele;
            obj.lsinfo_text();
            system("pause");
            create_window(4);
            draw(arr,arr.size());
            obj.linearsearch(arr,ele);
            getch();
            closegraph();
        break;

        case 2:
            cout<<"\n**BINARY SEARCH WORKS WITH SORTED ARRAYS ONLY** \n";
            ip_arr(arr);
            cout<<"\n Enter Element to be searched:";
            cin>>ele;
            obj.bsinfo_text();
            system("pause");
            create_window(5);
            draw(arr,arr.size());
            obj.binarysearch(arr,ele);
            getch();
            closegraph();
        break;

        default:
        cout<<"\n Invalid choice ";
        break;
    }
}


