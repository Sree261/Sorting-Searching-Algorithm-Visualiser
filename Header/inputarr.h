#ifndef INPUTARR_H_INCLUDED
#define INPUTARR_H_INCLUDED
#include<bits/stdc++.h>
#include "sortarr.h"
#include "searcharr.h"
using namespace std;
class ip:public sortarr,public searcharr{
public:
    void draw(vector<int> &arr,int size);
    void create_window(int val);
    void ip_arr(vector<int>&arr);
    void selectsort();
    void selectsearch();
    
};


#endif // INPUTARR_H_INCLUDED
