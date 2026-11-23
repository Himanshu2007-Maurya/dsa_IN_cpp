//for chaking address of any variable
// #include<iostream>
// using namespace std;
// int main(){
//     int b=78;
//     cout<<&b<<endl;
//     return 0;

// }
/////////////////////////////////////////////////////////////////////////
//POINTERS
// #include<iostream>
// using namespace std;
// int main (){
//     int a =435;
//     char b='H';
//     float c=23.5;
//     int *ptr1=&a;
//     char *ptr2=&b;
//     float *ptr3=&c;
//     cout<<"size of a "<<sizeof(ptr1)<<endl;
//     cout<<"size of b "<<sizeof(ptr2)<<endl;
//     cout<<"size of c  "<<sizeof(ptr3)<<endl;
//     cout<<&a<<endl;
//     cout<<&b<<endl;
//     cout<<&c<<endl;

//     cout<<*ptr3<<endl;   //to find the value of that varibale.
//     cout<<b<<endl;         //this is also show the value of that variable

//     //for modified any value
//     *ptr3=324.535;
//     cout<<c<<endl;

//     return 0;

// }
///////////////////////////////////////////////////////////////////////////////
//pass by value
// #include<iostream>
// using namespace std;
// void changeA(int b){
//     b=20;
//     cout<<b<<"\n";
// }
// int main(){
//    int a=10;
//    changeA(a);
//    cout<<a<<"\n";
//    return 0;

// }
//////////////////////////////////////////////////////////////////////////////
//CALL BY REFERENCE
// #include<iostream>
// using namespace std;
// void changeA(int *ptr){
//     *ptr=30;
//     cout<<*ptr<<endl;
// }
// int main(){
//     int a =19;
//     changeA(&a);
//     cout<<a<<endl;
// }
//////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     int y=10;
//     int *ptr1=&x;
//     int *ptr2=&y;
//     ptr2=ptr1;
//     cout<<ptr2<<endl;
//     cout<<ptr1<<endl;
//     cout<<&x<<endl;
//     return 0;

// }
/////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     int *ptr;
//     x=7;
//     ptr=&x;
//     cout<<*ptr;
//     return 0;
// }
///////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// void multipleby2(int &a,int &b, int &c){
//     a= a*2;
//     b=b*2;
//     c=c*2;
// }
// int main(){
//     int x = 1, y= 2,z= 3;
//     multipleby2(x,y,z);
//     cout<<x<<y<<z<<endl;
//     return 0;
// }
/////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int main(){
    int a=32;
    int *ptr = &a;

    char ch ='A';
    char &cho =ch;

    cho = cho+a;
    *ptr = *ptr+ch;
    cout<<a<<"," <<ch<<endl;
    return 0;


}
