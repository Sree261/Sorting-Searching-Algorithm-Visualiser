#include "inputarr.h"
#include<bits/stdc++.h>

using namespace std;

int main()
{
    system("COLOR 47");
    int k;
    ip obj;
    while(1)
    {
        system("CLS");
        cout<<"\n **WELCOME** ";
        cout<<"\n\n MENU ";
        cout<<"\n\n 1. Sorting ";
        cout<<"\n 2. Searching ";
        cout<<"\n 0. Exit ";
        cout<<"\n\n Enter your choice: ";
        cin>>k;

        switch(k)
        {
            case 1:
            obj.selectsort();
            break;

            case 2:
            obj.selectsearch();
            break;

            case 0:
            exit(0);

            default:
            cout<<"\n Invalid choice ";
            break;
        }
    }

    return 0;
}
