/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(void)
{
float p,obtained_marks,total_marks;
cout<<"Type obtained marks then space then type total marks then press enter\n";
cin>>obtained_marks>>total_marks;
p= (obtained_marks/total_marks)*100;
cout<<p<<endl;
}
