// Write a C++ program to compute area of Square, Circle, Triangle and Rectangle using function overloading concept.


#include<iostream>
using namespace std;

int area(int s)
{
    return(s*s);
}

int area(int l,int b)
{
    return(l*b);
}


float area(float r)
{
    return(3.14*r*r);
}

float area(float bs,float ht)
{
   return((bs*ht)/2);
}



int main()
{
        int s,l,b;
        float r,bs,ht;
        cout<<"Enter side of a square:";
        cin>>s;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        
        cout<<"Area of square is"<<area(s);
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of triangle is "<<area(bs,ht);
        cout<<"\nArea of rectangle is "<<area(l,b);
}