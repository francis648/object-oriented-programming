//c 3D ARRAYS
/*
c redefined functions
autor:Francis Macharia Mukuna
reg no: BSE-05-0166/2024
date:09/03/2024
version
*/
#include<iostream>
using namespace std;
int main(){
    int marks[2][2][3]={{
        {10,20,30},
        {40,50,60}},
        {
            {70,80,90},
            {100,110,120}
        }};
    int i,j,k;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){ 
            for(k=0; k<3; k++){
                cout<<marks[i][j][k] <<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}
