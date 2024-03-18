
//diffrence of sum of left diagonal and right diagonal
#include <iostream>
using namespace std;
int main()
{
    int a[4][4];
    cout << "enter value in array" << endl;
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    int s1=0;
    int s2=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                s1=s1+a[i][j];

            }
            if(j==4-i-1){
                s2=s2+a[i][j];
            }
        }
    }
    if((s1-s2)>0){
        cout<<"difference is"<<s1-s2;
    }
    else{
        cout<<"difference is"<<(s2-s1);
    }}