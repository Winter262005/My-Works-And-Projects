#include <iostream>
using namespace std;

class library {
    int bref;
    int iss;
    int ret;

public:
    int b1=1,b2=1,b3=1,b4=1,b5=1;
    void show(){
        cout<<"Books List:"<<endl;
        cout<<"2325 - Adventures of Tintin"<<endl;
        cout<<"Availability: "<<b1<<endl<<endl;
        cout<<"4536 - Art of War"<<endl;
        cout<<"Availability: "<<b2<<endl<<endl;
        cout<<"2395 - Concise Inorganic Chemistry"<<endl;
        cout<<"Availability: "<<b3<<endl<<endl;
        cout<<"7695 - Diary of a Wimpy Kid"<<endl;
        cout<<"Availability: "<<b4<<endl<<endl;
        cout<<"9977 - Introduction to C++"<<endl;
        cout<<"Availability: "<<b5<<endl<<endl;
    }
    void issue(){
        show();
        cout<<"Enter Reference number of the book to be issued: "<<endl;
        cin>>bref;
        if(bref==2325 && b1==1){
            cout<<"Book Issued : Adventures of Tintin"<<endl<<endl;
            b1=0;
            show();
        }else if(bref==4536 && b2==1){
            cout<<"Book Issued : Art of War"<<endl<<endl;
            b2=0;
            show();
        }else if(bref==2395 && b3==1){
            cout<<"Book Issued : Concise Inorganic Chemistry"<<endl<<endl;
            b3=0;
            show();
        }else if(bref==7695 && b4==1){
            cout<<"Book Issued : Diary of a Wimpy Kid"<<endl<<endl;
            b4=0;
            show();
        }else if(bref==9977 && b5==1){
            cout<<"Book Issued : Introduction to C++"<<endl<<endl;
            b5=0;
            show();
        }else{
            cout<<"Book Unavailable or wrong reference number."<<endl;
        }
    }
    void retbook(){
        cout<<"Enter reference number: "<<endl;
        cin>>bref;
        if(bref==2325 && b1==0){
            cout<<"Book Returned : Adventures of Tintin"<<endl<<endl;
            b1=1;
            show();
        }else if(bref==4536 && b2==0){
            cout<<"Book Returned : Art of War"<<endl;
            b2=1;
            show();
        }else if(bref==2395 && b3==0){
            cout<<"Book Returned : Concise Inorganic Chemistry"<<endl<<endl;
            b3=1;
            show();
        }else if(bref==7695 && b4==0){
            cout<<"Book Returned : Diary of a Wimpy Kid"<<endl<<endl;
            b4=1;
            show();
        }else if(bref==9977 && b5==0){
            cout<<"Book Returned : Introduction to C++"<<endl<<endl;
            b5=1;
            show();
        }else{
            cout<<"Wrong reference number."<<endl;
        }
    }
    void intro(){
        cout<<"Welcome to the Library. What can I do for you today?"<<endl;
        cout<<"1. Show Books List"<<endl;
        cout<<"2. Issue a Book"<<endl;
        cout<<"3. Return a Book"<<endl;
        cout<<"Enter your Choice (1-3) "<<endl;
        int func;
        cin>>func;
       if(func==1){
           show();
       }else if(func==2){
           issue();
       }else if(func==3){
           retbook();
       }else{
           cout<<"Wrong Input"<<endl;
       }
       string yes;
       cout<<"Do you want anything else? (y/n)"<<endl;
       cin>>yes;
       if(yes=="y"){
        system("cls");
        intro();
       }else{
           system("cls");
           cout<<"Thanks for using the Library."<<endl;
       }
    }
};
int main(){
    library o1;
    o1.intro();
    return 0;
}
