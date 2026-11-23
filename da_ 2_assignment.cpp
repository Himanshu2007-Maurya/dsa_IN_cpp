/*Question 1 : In a program, input the side of a square. You have to output the area of
the square.
Input : n (side) Output
: n*n (area)*/
// #include<iostream>
// using namespace std;
// int main(){
//     int side;
//     int area;
//     cout<<"enter the value of side :";
//     cin>>side;
//     area=side*side;
//     cout<<"area of a square :"<<area;
//     return 0;
// }


// /*Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as
// their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
// problem)*/
// #include<iostream>
// using namespace std;
// int main(){
//     float pencil;
//     float pen;
//     float eraser;
//     float amount;
//     float gst;
//     float finalprice;
//     cout<<"enter the price of pencil :";
//     cin>>pencil;
//     cout<<"enter the price of pen :";
//     cin>>pen;
//     cout<<"enter the price of eraser :";
//     cin>>eraser;
//     amount = pencil+pen+eraser;
//     cout<<" amount of things :"<<amount<<endl;
//     gst = (amount*18)/100;
//     cout<<"gst in these things :"<<gst<<endl;
//     finalprice = amount+gst;
//     cout<<" final price with gst :"<<finalprice;
//     return 0;

// }
/*Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)Output :
(P*R*T) / 100*/
// #include<iostream>
// using namespace std;
// int main(){
//     int principal;
//     int rate;
//     int time;
//     float si;
//     cout<<"enter principal amount :";
//     cin>>principal;
//     cout<<"enter rate :";
//     cin>>rate;
//     cout<<"time :";
//     cin>>time;
//     si=(principal*rate*time)/100;
//     cout<<" final total amount is :"<<si<<endl;
//     return 0;
// }

/*Question 4 : Write a program to calculate the area of a circle.
Input : r (radius)
Output : PI*r*r (area)*/
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<" enter the valua of r :";
    cin>>r;
    cout<<"area of circle :"<<(22/7 *r *r)<<endl;
    return 0;
}






