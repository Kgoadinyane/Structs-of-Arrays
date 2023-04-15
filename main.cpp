#include <iostream>

using namespace std;
int stdNo,a,i,averageAssMark=1,averageTestMark=1,sumAssMark=0, sumTestMark=0;
double finalMark =1;
string studentName;
const int num=50;


int main()
{
    for (stdNo=0; stdNo <num; stdNo++){
       cout<<"enter std no"<<endl;
        cin>>stdNo;
        cout<<"enter std name"<<endl;
       cin>> studentName;

       int assMark[3]={};
       for (a=0 ; a< 3 ; a++){
            cout<<"enter ass mark"<<endl;
        cin>>assMark[a];
        int sumAssMark = sumAssMark + assMark[a];
         int averageAssMark = sumAssMark/10;
       }

       int testMark[4]={};
       for (i=0; i< 3; i++){
            cout<<"enter test mark"<<endl;
          cin>>testMark[i];
         int sumTestMark = sumTestMark + testMark[i];
         int averageTestMark = sumTestMark/4;
       }
        finalMark = (averageTestMark*0.6)+(averageAssMark*0.4);

       cout<<stdNo<<endl;
       cout<<studentName<<endl;
       cout<<finalMark<<endl;


    }

    return 0;
}
