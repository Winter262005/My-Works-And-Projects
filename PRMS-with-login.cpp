#include <iostream>
using namespace std;

const int maxusers=100;
string usernames[maxusers];
string passwords[maxusers];
int numUsers=0;

void registerUser(){
    if(numUsers>=maxusers){
        cout<<"User registration limit reached.\n";
        return;
    }
    cout<<"Enter username: ";
    cin>>usernames[numUsers];
    cout<<"Enter password: ";
    cin>>passwords[numUsers];
    numUsers++;
    cout<<"User registered successfully!\n";
    system("pause");
}
bool loginUser(){
    string username,password;
    while (true){
        cout<<"Enter username (or type 'quit' to exit): ";
        cin>>username;
        if (username=="quit"){
            cout<<"Exiting...\n";
            return false;
        }
        cout<<"Enter password: ";
        cin>>password;
        for (int i = 0; i < numUsers; i++){
            if (usernames[i]==username && passwords[i]==password){
                cout<<"Login successful!\n";
                system("pause");
                system("cls");
                return true;
            }
        }
        cout<<"Invalid username or password!\n";
        system("pause");
        system("cls");
    }
}

class Payroll{
    int wdays;
    int medlv;
    float salary;
    float benefits;
    float ovtime;
    string yn;
    int empPos;
public:
    void display(){
        cout<<"=============================================="<<endl;
        cout<<"Welcome to Payroll Management System v1.04.27"<<endl;
        cout<<"==============================================\n"<<endl;
        cout<<"For Base Salary, please enter your working days out of 287:\n(2nd and 4th Saturdays and Sundays are not counted) "<<endl;
        cin>>wdays;
        if(wdays>287){
            cout<<"Invalid Input"<<endl;
        }else{
            cout<<"Your Workdays Are ("<<wdays<<"/287)"<<endl;
        }
        cout<<"Have you taken medical leave (y/n): "<<endl;
        cin>>yn;
        if(yn=="y"){
            cout<<"Enter the number of days you have taken medical leave: "<<endl;
            cin>>medlv;
            if(medlv>287-wdays){
                cout<<"Number exceeds total working days."<<endl;
            }else{
                wdays=wdays+medlv;
                cout<<"Your total Working days including medical leave are ("<<wdays<<"/287)"<<endl;
            }
        }
    }
    void calculate(){
        cout<<"Please enter your Position in the Company: \n 1.Director\n 2.President\n 3.Manager\n 4.Officer\n 5.Technician\npress (1-5)"<<endl;
        cin>>empPos;
        if(empPos==1){
            cout<<"Your Daily Pay is $400/day"<<endl;
            salary=400*wdays;
            cout<<"Your Base Salary is : $"<<salary<<endl<<endl;
        }else if(empPos==2){
            cout<<"Your Daily Pay is $300/day"<<endl;
            salary=300*wdays;
            cout<<"Your Base Salary is : $"<<salary<<endl<<endl;
        }else if(empPos==3){
            cout<<"Your Daily Pay is $200/day"<<endl;
            salary=200*wdays;
            cout<<"Your Base Salary is : $"<<salary<<endl<<endl;
        }else if(empPos==4){
            cout<<"Your Daily Pay is $100/day"<<endl;
            salary=100*wdays;
            cout<<"Your Base Salary is : $"<<salary<<endl<<endl;
        }else if(empPos==5){
            cout<<"Your Daily Pay is $25/day"<<endl;
            salary=25*wdays;
            cout<<"Your Base Salary is : $"<<salary<<endl<<endl;
        }else{
            cout<<"Invalid Input"<<endl;
        }
    }
    void benefit(){
        cout<<"==================="<<endl;
        cout<<"Benefits on Salary: "<<endl;
        cout<<"===================\n"<<endl;
        cout<<"Provident Fund Deduced: 12%"<<endl;
        salary=salary-(salary*0.12);
        cout<<"Salary after Deduced PF: \n$"<<salary<<endl<<endl;
        cout<<"==========="<<endl;
        cout<<"Allowances: "<<endl;
        cout<<"===========\n"<<endl;
        cout<<"House Rent Allowance: $300\nGasoline Allowance: $150\nOther Allowance: $100"<<endl;
        benefits=550;
        cout<<"Total Benefits : $"<<benefits<<endl<<endl;
    }
    void overtime(){
        int ohrs;
        cout<<"Enter your Overtime Hours: "<<endl;
        cin>>ohrs;
        cout<<"Overtime salary is $12.5/hr"<<endl;
        ovtime=(ohrs*12.5);
        cout<<"Total Salary for Overtime is: $"<<ovtime<<endl;
    }
    void total(){
        cout<<"\n\n======================"<<endl;
        cout<<"Final Salary: $"<<salary+benefits+ovtime<<endl;
        cout<<"======================"<<endl;
    }
    void lgn(){
        Payroll p1;
        int ac;
        cout<<"=============================================="<<endl;
        cout<<"Welcome to Payroll Management System v1.04.27"<<endl;
        cout<<"==============================================\n"<<endl;
        cout<<"1.Create a New ID.\n2.Login User."<<endl;
        cin>>ac;
            if(ac==1){
            registerUser();
            system("cls");
            lgn();
        }else{
            if (loginUser()){
                string ovt;
                p1.display();
                p1.calculate();
                cout<<"Have you worked Overtime? (y/n)"<<endl;
                cin>>ovt;
                if(ovt=="y"){
                    p1.overtime();
                }
                p1.benefit();
                p1.total();
                system("pause");
                system("cls");
                lgn();
            }
        }
    }
};
int main(){

    Payroll p1;
    p1.lgn();

    return 0;
}
