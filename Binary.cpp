#include <iostream>
#include <cmath>
using namespace std;
class binary{
    public: int reminder;
    public: int number;
    public: string binary;

 void getbinaryData(int n){
    number = n;
    cout<<"\n"<<"Here your binary data --> \n"<<"      Ans :  ";
    while (number != 0)
    {
        reminder = number % 2;
        number = number / 2;
        cout << reminder;
    }
    cout<<"\n\n";
    }


void getnumberData(string b){
 binary=b;
 int sum = 0;
 for(int i=binary.size();i>=0;i--){
    if(binary[i]=='1'){
        sum+=pow(2,i);
    }
}
    cout<<"Here your decimal number -->"<<"\n"<<"      Ans :  "<<sum<<"\n\n";
}
};
int main()
{
      binary b1;
    int  m;
    string c;
    int choice=0;
    while(choice<3){
    cout<<"enter 1 to convert decimal number to binary "<<"\n";
    cout<<"enter 2 to convert binary number to decimal "<<"\n";
    cout<<"enter 3 for exit "<<"\n";
    cin>>choice;
    switch(choice){
   case 1:
    cout << "enter number you need to convert in binary "<<"\n";
    cin >> m;
    b1.getbinaryData(m);
    break;

    case 2:
    cout << "enter number you need to convert in decimal "<<"\n";
    cin>>c;
    b1.getnumberData(c);
    break;

    default:
    cout<<"Thanks for trust us and your valueable time";
    break;
    } 

    }
    
    


    return 0;
}