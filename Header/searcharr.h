#ifndef SEARCHARR_H_INCLUDED
#define SEARCHARR_H_INCLUDED
#include<bits/stdc++.h>

using namespace std;

class searcharr{
public:
    void bsinfo_text();
    void lsinfo_text();
    void ele_found(int idx);
    void ele_notfound();
    void bsearch_text();
    void lsearch_text();
    void ele_notequal(int i);
    void ele_equal(int i);
    void ele_compare(int i);
    void exclude(int i,int j);
    void ele_notequalleft(int i);
    void linearsearch(vector<int>&arr,int ele);
    void binarysearch(vector<int>&arr,int ele);
    
    virtual void draw(vector<int> &arr,int size);
    virtual void create_window(int val);
};



#endif // SEARCHARR_H_INCLUDED
