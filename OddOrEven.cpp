#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int num1, num2;
bool r=true ,s=true, t=true, t1=true;
int ne;
int ne1;
cout<<"Enter Num1: ";
cin>>num1;

cout<<"Enter Num2: ";
cin>>num2;
cout<<"\n";
if(num1>num2){
    cout<<"Num1: "<<num1<<" is higher than Num2: "<<num2;

}else if(num1==num2){
    cout<<"Num1: "<<num1<<" is equal to Num2: "<<num2;
}else{
cout<<"Num2: "<<num2<<" is higher than Num1: "<<num1;
}
cout<<"\n";
cout<<"\n";
if(num1>=0){
    cout<<"Num1: "<<num1<<" is positive number \n";

}else{
cout<<"Num1: "<<num1<<" is negative number \n";

}

if(num2>=0){
    cout<<"Num2: "<<num2<<" is positive number \n";

}else{
cout<<"Num2: "<<num2<<" is negative number \n";

}
cout<<"\n";
////////////////for num1
for(int k=0; k>=num1; k++){
if(num1=-num1){
        t=false;
    num1*-1;
}}
for(int i=2; i<=num1/2; i++){
    if(num1%i!=0){
        r=false;



}
}
/////////////for num2
for(int a=0; a>=num2; a++){
if(num2=-num2){
        t1=false;
    num2*-1;
}}
for(int i=2; i<=num2/2; i++){
    if(num2%i!=0){
            s=false;
          }

}

        ////////////////for num1

if(r==true){
 if(r!=t){
        ne=num1*-1;
                num1=ne;
                cout<<"Num1: "<<ne<<" is Even number \n";
 }else{

 cout<<"Num1: "<<num1<<" is Even number \n";
 }

            }else if(r==t){
                ne=num1*-1;
                num1=ne;

                    cout<<"Num1: "<<ne<<" is Odd number \n";


                }else{
                 cout<<"Num1: "<<num1<<" is Odd number \n";
                ne=num1;
                }

                /////////////for num2

            if(s==true){
                if(s!=t1){
        ne1=num2*-1;
                num2=ne1;
                cout<<"Num2: "<<ne1<<" is Even number \n";
 }else{

 cout<<"Num2: "<<num2<<" is Even number \n";
 }
    }else if(s==t1){

                ne1=num2*-1;
                num2=ne1;
                    cout<<"Num2: "<<ne1<<" is Odd number \n";

            }else {
                ne1=num2;
    cout<<"Num2: "<<num2<<" is Odd number \n";

}

cout<<"\n";
///////////////for num1
if(num1%3==0){
    cout<<"Num1: "<<num1<<" is divisible by 3 \n";
}else{
     cout<<"Num1: "<<num1<<" is not divisible by 3 \n";
}
////////////for num2
if(num2%3==0){
     cout<<"Num2: "<<num2<<" is divisible by 3 \n";
}else{
     cout<<"Num2: "<<num2<<" is not divisible by 3 \n";
}

cout<<"\n";
system("pause");
}
