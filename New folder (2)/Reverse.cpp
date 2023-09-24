#include <iostream>
using namespace std;

struct Reveres
{
string num1;

string output(string input){
          

        for(int o  = input.length();  -1 < o ; o-- ){
            
             num1 += input[o];
 
            }
 
                return num1;

}
};    


int main(){
cout<<"welcom "<<endl;
string input;
cin>>input;

Reveres fun1;
cout<<fun1.output(input);
}