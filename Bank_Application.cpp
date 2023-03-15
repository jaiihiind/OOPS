#include<bits/stdc++.h>
using namespace std; 
int n,i,k,m,s;

class bank 
{ 
    int acc_no; 
    string name; 
    string password; 
    int balance; 

    public: 
        bank() 
        { 
            acc_no=0;
        } 
        void create_account();
        void deposit(); 
        int generate_accno(int i); 
        void withdraw(); 
        void transfer (bank); 
        void display(); 
        static void sort(bank a[]);  
        void delete_account(); 
};


void bank::create_account()         //create account 
{ 
    cout<<"enter"<<i+1<<"customer's details:"<<endl; 
    cout<<"name: "<<endl; 
    cin>>name; 
    acc_no=generate_accno(i); 
    cout<<"password: "<<endl; 
    cin>>password; 
    cout<<"balance:"<<endl; 
    cin>>balance; 
} 


int bank::generate_accno(int i)  //generate unique account numbers 
{ 
    acc_no=acc_no+i;
    i++;
    return acc_no;   
} 


void bank::display() //display the details of all customers
{ 
    cout<<"customer details: "<<endl; 
    cout<<"name: "<<name<<endl;
    cout<<"account number:"<<acc_no<<endl; 
    cout<<"balance: "<<balance<<endl;
} 


void bank::deposit()    //deposit the amount 
{ 
    string p;
    int amount; 
    cout<<"enter the password:"; 
    cin>>p;
    if (p==password) 
    {
        cout<<"enter the amount to deposit:"; 
        cin>>amount; 
        balance=balance+amount; 
        cout<<"balance: "<<balance;
    } 
    else 
    { 
        cout<<"incorrect password..!!"<<endl; 
    } 
} 


void bank::withdraw()//withdraw the amount 
{ 
    string p;
    int amount;
    cout<<"enter the password:"; 
    cin>>p; 
    if (p==password) 
    { 
        cout<<"enter the amount to withdraw: "; 
        cin>>amount; 
        if (amount<balance) 
        { 
            balance=balance-amount; 
            cout<<"remaining balance: "<<balance; 

        } 
        else 
        {
            cout<<"insufficient balance..!"<<endl; 

        } 

    }
        else 
        { 
            cout<<"incorrect password..!!"<<endl;
        } 
} 


void bank::transfer(bank a)         //transfer the amount from one accunt to another 
{ 
    int amount; 
    string p,q; 
    cout<<"enter the password for from account: "<<endl;
    cin>>p; 
    cout<<"enter the password for from account: "<<endl;    
    cin>>q; 
    if ((p==password) && (q==a.password))
    {
        cout<<"enter the amount to transfer:"; 
        cin>>amount;
        if (amount<balance)
        { 
            a.balance=a.balance+amount; 
            balance=balance-amount; 
            cout<<balance<<endl;
            cout<<a.balance<<endl; 

        } 
        else 
        { 
            cout<<"insufficient balance"; 
        } 
    }
    else 
    { 
        cout<<"invalid password";
    } 

}


void bank::sort(bank b[])   // sort the customer details based on balance
{ 
    int i,j; 
    bank temp; 
    for(i=0;i<n;i++) 
    { 
        for (j=0;j<n;j++) 
        { 
            if (b[i].balance<b[j].balance) 
            { 
                temp=b[i];
                 b[i]=b[j];
                  b[j]=temp; 
            } 
        } 
    } 
    for(i=0;i<n;i++)
    { 
        b[i].display();
    }
} 


// bool bank::sort_balance(const bank& a, const bank& b)
// {
//     return a.balance < b.balance;
// }

// void bank::sort(bank b[], int n) 
// { 
//     sort(b, b+n,sort_balance); 
// }



void bank::delete_account()// delete a specific account 
{ 
        name="XXX"; 
        acc_no=-1;
        balance=-1; 

}







int main() 
{ 
bank b[100]; 
cout<<"enter the number of customers: "; 
cin>>n; 
int choice; 
do 
{ 
cout<<"1. create account \n2. dispaly all accounts \n3. deposit \n4.withdraw \n5.transfer \n6.display based on account number \n7.sorting based on balance \n8.delete account \n9. exit "<<endl; 
cout<<"enter your choice: "<<endl; 
cin>>choice; 
switch (choice) 
{ 
case 1:for(i=0;i<n;i++) 
        { 
            b[i].create_account(); 
        } 
        break;
case 2:for(i=0;i<n;i++)
        { 
            b[i].display();
        } 
        break; 
case 3: cout<<"enter the account number: "; 
        cin>>k; 
        b[k].deposit(); 
        break; 
case 4: cout<<"enter the account_no:";
        cin>>k; 
        b[k].withdraw(); 
        break; 
case 5: cout<<"enter from account_no:"; 
        cin>>k; 
        cout<<"enter to account no:"; 
        cin>>m; 
        b[k].transfer(b[m]); 
        break; 
case 6: cout<<"enter the account number to display the details:"; 
        cin>>k; 
        b[k].display(); 
        break;
case 7: bank::sort(b); 
        break; 
case 8: cout<<"enter the account number to delete:"; 
        cin>>k; 
        b[k].delete_account(); 
        break; 
default:exit (0); 
} 


cout<<"press 1 to continue"<<endl; 
cin>>s; 
}
while(s==1); 
return 0; 
} 