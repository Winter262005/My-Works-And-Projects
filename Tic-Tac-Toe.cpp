#include <iostream>
using namespace std;

class tictactoe{
public:
    char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int row;
    int column;
    char token='x';
    bool tie=false;
    void interface(){

        cout<<"    |    |    "<<endl;
        cout<<"  "<<space[0][0]<<" |  "<<space[0][1]<<" |  "<<space[0][2]<<"  "<<endl;
        cout<<"____|____|____"<<endl;
        cout<<"    |    |    "<<endl;
        cout<<"  "<<space[1][0]<<" |  "<<space[1][1]<<" |  "<<space[1][2]<<"  "<<endl;
        cout<<"____|____|____"<<endl;
        cout<<"    |    |    "<<endl;
        cout<<"  "<<space[2][0]<<" |  "<<space[2][1]<<" |  "<<space[2][2]<<"  "<<endl;
    }
    void assignment(){
        int digit;
        string n1,n2;

        if(token=='x'){
            cout<<n1<<" (x) please enter";
            cin>>digit;
        }
        if(token=='0'){
            cout<<n2<<" (0) please enter";
            cin>>digit;
        }
        if(digit==1){
            row=0;
            column=0;
        }
        if(digit==2){
            row=0;
            column=1;
        }
        if(digit==3){
            row=0;
            column=2;
        }
        if(digit==4){
            row=1;
            column=0;
        }
        if(digit==5){
            row=1;
            column=1;
        }
        if(digit==6){
            row=1;
            column=2;
        }
        if(digit==7){
            row=2;
            column=0;
        }
        if(digit==8){
            row=2;
            column=1;
        }
        if(digit==9){
            row=2;
            column=2;
        }
        else if(digit<1 || digit>9){
            cout<<"Invalid"<<endl;
        }

        if(token=='x' && space[row][column] != 'x' && space[row][column] != '0'){
            space[row][column]='x';
            token='0';
        }
        else if(token=='0' && space[row][column] != 'x' && space[row][column] != '0'){
            space[row][column]='0';
            token='x';
        }
        else{
            cout<<"There is no empty space"<<endl;
            assignment();
        }

    }
    int condition() {
    for(int i=0; i<3; i++){
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2]) {
            return space[i][0] == 'x' ? 1 : 2;
        }
        if(space[0][i]==space[1][i] && space[0][i]==space[2][i]) {
            return space[0][i] == 'x' ? 1 : 2;
        }
    }
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2]) {
        return space[0][0] == 'x' ? 1 : 2;
    }
    if(space[0][2]==space[1][1] && space[1][1]==space[2][0]) {
        return space[0][2] == 'x' ? 1 : 2;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(space[i][j]!='x' && space[i][j]!='0'){
                return 0;
            }
        }
    }
    return 3;
}

};

int main(){
    string n1,n2;
    tictactoe t1;
    cout<<"Enter name of first player: "<<endl;
    cin>>n1;
    cout<<"Enter name of second player: "<<endl;
    cin>>n2;

    int result;
    do {
        t1.interface();
        t1.assignment();
        result = t1.condition();
    } while(result == 0);

    if(result == 1) {
        cout << n1 << " wins!" << endl;
    } else if(result == 2) {
        cout << n2 << " wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}
