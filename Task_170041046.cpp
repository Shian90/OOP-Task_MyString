#include<bits/stdc++.h>

using namespace std;

class MyString
{
    private:
        int stringg_size;
        char *stringg;

    public:
        MyString()
        {
            stringg = (char*) malloc(sizeof(char)* 100);
            stringg_size = 100;
        }
        MyString(int size_stringg)
        {
            stringg_size = size_stringg;
            stringg = (char*)malloc(sizeof(char) * stringg_size);
        }
        bool Set(char *arra)
        {
            int arra_len = 0;

            for(int i=0; arra[i]!=NULL ; i++)
            {
                arra_len++;
                cout<< arra[i] << endl;
            }
            cout<<"Length: " << arra_len<< endl;

            if(arra_len <= stringg_size)
            {
                stringg = arra;
                stringg_size = arra_len;
                return true;
            }
            else
            {
                return false;
            }
        }
        void Print()
        {
            for(int i=0 ; i<stringg_size; i++)
                cout << stringg[i];
            cout<<endl;
        }
};
