#include<bits/stdc++.h>
#include<graphics.h>
#include "sortarr.h"

using namespace std;

void sortarr::sort_text(){
    setcolor(YELLOW);
    rectangle(10,250,50,300);
    outtextxy(70,275,"-Comparing");
    setcolor(GREEN);
    rectangle(10,310,50,360);
    outtextxy(70,335,"-Swapping");
    setcolor(RED);
    rectangle(10,380,50,430);
    outtextxy(70,405,"-No Swap");
}
void sortarr::report(int swaps,int cycle){
    cleardevice();
    setcolor(RED);
    settextstyle(10,0,4);
    outtextxy(375, 100,"Report");
    string s="Total Number of Passes:"+to_string(cycle);
    char* char_arr;
    char_arr = &s[0];
    settextstyle(1,0,2);
    setcolor(YELLOW);
    outtextxy(325,150,char_arr);
    string y="Total Number of Swaps:"+to_string(swaps);
    char_arr = &y[0];
    outtextxy(325,175,char_arr);
    getch();

}
void sortarr::ele_swap(vector<int>&arr,int i,int j){
    setcolor(GREEN);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    rectangle(10+(50*(j)), 50, 10+(50*(j+1)), 100);
    getch();
    setcolor(WHITE);
    draw(arr,arr.size());
}

void sortarr::ele_comp(int i,int j){
    setcolor(YELLOW);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    rectangle(10+(50*(j)), 50, 10+(50*(j+1)), 100);
    getch();
}

void sortarr::ele_noswap(int i, int j){
    if(j==0){
    setcolor(RED);
    rectangle(10+(50*(j)), 50, 10+(50*(j+1)), 100);
    getch();
    setcolor(WHITE);
    rectangle(10+(50*(j)), 50, 10+(50*(j+1)), 100);
    getch();
    }
    else{
    setcolor(RED);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    rectangle(10+(50*(j)), 50, 10+(50*(j+1)), 100);
    getch();
    setcolor(WHITE);
    rectangle(10+(50*i), 50, 10+(50*(i+1)), 100);
    rectangle(10+(50*(j)), 50, 10+(50*(j+1)), 100);
    getch();
    }
}


void sortarr::bub_text(){
    system("CLS");
    char *text="\t\t\t\t\t\t\tBubble Sort \n";
    char *str ="Bubble sort is one of the fundamental forms of sorting in programming. Bubble sort algorithms\n"
                "move through a sequence of data (typically integers) and rearrange them into\n"
                "ascending or descending order one number at a time.\n"
                "To do this, the algorithm compares number X to the adjacent number Y. If X is higher than Y,"
                "the two are swapped and the algorithm starts over.\n \n";
    cout<<text;
    cout<<str;
}

void sortarr::sele_text(){
    system("CLS");
    char *text="\t\t\t\t\t\t\tSelection Sort \n";
    char *str ="In selection sort, the smallest value among the unsorted elements of the array is selected in every pass\n"
                "and inserted to its appropriate position into the array.\n\n"
                "First, find the smallest element of the array and place it on the first position.\n"
                "Then, find the second smallest element of the array and place it on the second position.\n"
                "The process continues until we get the sorted array.\n \n";
    cout<<text;
    cout<<str;
}

void sortarr::ins_text(){
    system("CLS");
    char *text="\t\t\t\t\t\t\tInsertion Sort \n";
    char *str ="Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.\n\n"
                "Insertion sort works similarly as we sort cards in our hand in a card game.\n\n"
                "Insertion sort iterates, consuming one input element each repetition, and grows a sorted output list.\n"
                "At each iteration, insertion sort removes one element from the input data, finds the location it belongs \n"
                "within the sorted list, and inserts it there. It repeats until no input elements remain.\n \n";
    cout<<text;
    cout<<str;

}

void sortarr::insertionsort(vector<int>&arr){
    int n=arr.size();
    int swap_count=0;
    sort_text();
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {   ele_comp(j,j+1);
            swap(arr[j],arr[j+1]);
            swap_count++;
            ele_swap(arr,j,j+1);
            getch();
            j = j - 1;
        }
        ele_noswap(j,j+1);
    }
    getch();
    report(swap_count,i);
}

void sortarr::selectionsort(vector<int>&arr){
    int n=arr.size();
    int swap_count=0;
    int i, j, min_idx;
    sort_text();
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
          ele_comp(min_idx,j);
        if (arr[j] < arr[min_idx]){
            min_idx = j;
            swap_count++;
        }
        setcolor(WHITE);
        draw(arr,n);
        }
        swap(arr[min_idx],arr[i]);
        ele_swap(arr,min_idx,i);
    }
    getch();
    report(swap_count,n-1);
}

void sortarr::bubblesort(vector<int>&arr){
    int n=arr.size();
    int swap_count=0;
    sort_text();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            ele_comp(j,j+1);
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                ele_swap(arr,j,j+1);
                swap_count++;
            }
            else{
                ele_noswap(j,j+1);
            }
        }
    }
    report(swap_count,n-1);
}
