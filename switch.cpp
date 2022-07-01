// multiple langugae robot
#include <iostream>
using namespace std;
 int main()
 {
     char button;
     cout<<"input the charactor: ";
     cin>>button;
     switch (button)
     {
     case 'a':
         cout<<"hello"<<endl;
         break;
     case 'b':
         cout<<"ram ram"<<endl;
         break;
     case 'c':
         cout<<"namste"<<endl;
         break;
     case 'd':
         cout<<"allah"<<endl;
         break;
     case 'e':
         cout<<"ola"<<endl;
         break;
     case 'f':
         cout<<"payar"<<endl;
         break;
     
     default:
     cout<<"i am still learning the data"<<endl;
         break;
     }

     return 0;
 }