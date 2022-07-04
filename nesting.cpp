#include<iostream>
#include<string>
using namespace std;

class binary
{
private:
    string s;
    void che_bin(void);
public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void){
    cout<<"Enter a random binary number: ";
    cin>>s;
}

void binary::che_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '1' && s.at(i) != '0'){
            cout<<"You have entered Incorrect binary number"<<endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void){
    che_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '1'){
            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
}

void binary::display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);   
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    
    return 0;
}