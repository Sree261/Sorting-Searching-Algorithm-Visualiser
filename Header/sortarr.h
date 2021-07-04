#ifndef SORTARR_H_INCLUDED
#define SORTARR_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class sortarr{
    public:
    void sort_text();
    void bub_text();
    void sele_text();
    void ins_text();
    void report(int swaps,int cycle);
    void ele_swap(vector<int>&arr,int i,int j);
    void ele_comp(int i,int j);
    void ele_noswap(int i, int j);
    void insertionsort(vector<int>&arr);
    void selectionsort(vector<int>&arr);
    void bubblesort(vector<int>&arr);
    
    virtual void draw(vector<int> &arr,int size);
    virtual void create_window(int val);

};

#endif // SORTARR_H_INCLUDED
