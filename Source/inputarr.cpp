#include<bits/stdc++.h>
#include "inputarr.h"
#include "searcharr.h"
#include "draw_fns.h"
#include "sortarr.h"
#include "graphics.h"

using namespace std;
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


