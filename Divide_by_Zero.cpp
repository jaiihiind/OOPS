//todo Exception Handling -> used to handle runtime error, and to maintain the normal flow of program 

#include <iostream>
using namespace std;
int main()
{
    int a , b ,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    try{                    // try-> write the risky code here
        if(b == 0 ){
            throw b;        //* used to throw the exception
        }
        else{
            c=a/b;
            cout<<"Result : "<<c;
        }
    }

    catch(int b){           //? used to handle the exception -> catch ( <type>  <variable> )
        cout<<"Can't divide by : "<<b;
    }

return 0;
}