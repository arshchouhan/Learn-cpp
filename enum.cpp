 #include <iostream>
//  enum day {mon,tue,wed,thus,fri,sat,sun};
 enum day {mon=1,tue,wed,thus=10,fri,sat,sun};
//  #define mon 0;
//  const int mon=0;

 using namespace std;
 int main()
 {
    day d;
    // d=0; can only assign values from enum;
    // d=1;
   //  cout<< mon;
    d=mon;
    cout<<mon<<endl<<tue<<endl<<wed<<endl<<thus<<endl<<fri<<endl<<sat<<endl<<sun<<endl;


 }
