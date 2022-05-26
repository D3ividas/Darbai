#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

void argreitesnis(int l, double vid);

int main()

{ 
    int a, sk[6], sum1, sum2, sum3, l;
    double vid;

    ifstream in("duomenys.txt");
    in >> a;
    sum3 = 0;


    for(int i=0; i<a; i++)
    {
        sum1=0; sum2=0;
        for(int k=0; k<6; k++) 
        {  
            in >> sk[k];

            sum1 = sk[0] * 60 * 60 + sk[1] * 60 + sk[2];
            sum2 = sk[3] * 60 * 60 + sk[4] * 60 + sk[5];
            
        }

    l = sum2 - sum1;
    sum3 = sum3 + l;
    vid = sum3 / a;

        cout << i+1 <<  "-asis dalyvis atbego per " << l << " s"; argreitesnis(l, vid);
        cout << endl;       
    }  

    cout << "\nVidutinis laikas : " << vid << " s";
    return 0;
}

void argreitesnis( int l, double vid)
{
    vid = 8416;
    
    if(l < vid) 
     {
        cout << " ir tai yra greitesnis laikas negu vidutinis!! "; 
     }
}
    

     

