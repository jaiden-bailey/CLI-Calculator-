// Jaiden B 06/20/2022

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Userinput = "";
    cin >> Userinput; 
    char Operator = 'a';
    int Oppos = -1;
    
    for (int i = 0; i < Userinput.size(); i++){ 
        if(Userinput[i] == '+' || Userinput[i] == '*' || Userinput[i] == '-' || Userinput[i] == '/'){
            Oppos = i ;
            Operator = Userinput[i];
        }
    }
    
    string Num1 = Userinput.substr(0, Oppos);
    string Num2 =Userinput.substr (Oppos + 1 );
    
    int Int1 = stoi(Num1);
    int Int2 = stoi(Num2);
    
    if(Operator == '+')
        cout << Int1 + Int2;
    else if (Operator == '-')
        cout << Int1 - Int2;
    else if (Operator == '*')
        cout << Int1 * Int2; 
    else if (Operator == '/')
        cout << Int1 / Int2;
        
    return 0;
}
