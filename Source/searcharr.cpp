#include<bits/stdc++.h>
#include<graphics.h>
#include "searcharr.h"

using namespace std;

void searcharr::ele_found(int idx){
    cleardevice();
    setcolor(RED);
    settextstyle(10,0,4);
    outtextxy(375, 100,"Report");
    string s="Element Found At Position "+to_string(idx);
    char* char_arr;
    char_arr = &s[0];
    settextstyle(1,0,2);
    setcolor(YELLOW);
    outtextxy(325,150,char_arr);
    getch();
}

void searcharr::ele_notfound(){
    cleardevice();
    setcolor(RED);
    settextstyle(10,0,4);
    outtextxy(375, 100,"Report");
    string s="Element Not Found";
    char* char_arr;
    char_arr = &s[0];
    settextstyle(1,0,2);
    setcolor(YELLOW);
    outtextxy(325,150,char_arr);
    getch();
}

void searcharr::lsearch_text(){
    setcolor(YELLOW);
    rectangle(10,250,50,300);
    outtextxy(70,275,"-Comparing");
    setcolor(GREEN);
    rectangle(10,310,50,360);
    outtextxy(70,335,"-Element Found");
    setcolor(RED);
    rectangle(10,370,50,430);
    outtextxy(70,405,"-Element Not Found");
}
void searcharr::bsearch_text(){
    setcolor(YELLOW);
    rectangle(10,250,50,300);
    outtextxy(70,275,"-Comparing");
    setcolor(GREEN);
    rectangle(10,310,50,360);
    outtextxy(70,335,"-Element Found");
    setcolor(BLUE);
    rectangle(10,370,50,420);
    outtextxy(70,395,"-Excluded Region");
    setcolor(RED);
    rectangle(10,430,50,480);
    outtextxy(70,455,"-Element to be searched less than current element..Excluding all elements to the right");
    setcolor(MAGENTA);
    rectangle(10,490,50,540);
    outtextxy(70,505,"-Element to be searched greater than current element..Excluding all elements to the left");
}
void searcharr::ele_notequal(int i){
    setcolor(RED);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    getch();
    setcolor(WHITE);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
}


void searcharr::ele_equal(int i){
    setcolor(GREEN);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    getch();
}

void searcharr::ele_compare(int i){
    setcolor(YELLOW);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    getch();
    setcolor(WHITE);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);

}

void searcharr::ele_notequalleft(int i){
    setcolor(MAGENTA);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    getch();
    setcolor(WHITE);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
}
void searcharr::exclude(int i,int j){
    setcolor(BLUE);
    for(i;i<=j;i++){
        rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    }
    getch();
    setcolor(WHITE);
}
void searcharr::bsinfo_text(){
    system("CLS");
    char *text="\t\t\t\t\t\t\tBinary Search \n";
    char *str ="Binary search is the search technique which works efficiently on the sorted lists.Hence, in order to search an element\n"
                "in some list by using binary search technique, we must ensure that the list is sorted.\n\n"
                "Binary search follows divide and conquer approach in which, the list is divided into two halves\n"
                "and the item is compared with the middle element of the list.\n\n"
                "If the match is found then, the location of middle element is returned \n"
                "otherwise, we search into either of the halves depending upon the result produced through the match.\n \n";
    cout<<text;
    cout<<str;
}

void searcharr::lsinfo_text(){
    system("CLS");
    char *text="\t\t\t\t\t\t\tLinear Search \n";
    char *str ="A linear search is the simplest method of searching a data set. Starting at the beginning of the data set,\n"
                "each item of data is examined until a match is made. Once the item is found, the search ends.\n\n"
                "If there is no match,the algorithm must deal with this.\n \n";
    cout<<text;
    cout<<str;
}

void searcharr::linearsearch(vector<int>&arr,int ele){
    int flag=0,index=0;
    lsearch_text();
    for(int i=0;i<arr.size();i++){
        ele_compare(i);
        if(arr[i]==ele){
        ele_equal(i);
        flag=flag+1;
        index=i;
        getch();
        break;
        }
        ele_notequal(i);
        getch();
    }
    if(flag==1)
        ele_found(index+1);
    else
        ele_notfound();
}

void searcharr::binarysearch(vector<int>&arr,int ele){
    bsearch_text();
    int start=0,endx=arr.size()-1;
    int flag=0,idx=0;
    while(start<=endx){
        int mid=(start+endx)/2;
        ele_compare(mid);
        if(arr[mid]==ele){
            ele_equal(mid);
            flag++;
            idx=mid+1;
            break;
        }
        else if(arr[mid]>ele){
            ele_notequal(mid);
            exclude(mid,endx);
            endx=mid-1;
        }
        else{
            ele_notequalleft(mid);
            exclude(start,mid);
            start=mid+1;
        }
    }
    if(flag==0)
        ele_notfound();
    else
        ele_found(idx);
}


