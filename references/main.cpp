//
//  main.cpp
//  references
//
//  Created by Hrishikesh Chaudhari on 14/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

#define NAME2(a,b)a##b
#define SIZE(a)sizeof(a)/sizeof(a[0])

//#define arg_two

using namespace  std;



int f(int a
#ifdef arg_two 
,int b
#endif
);

int swap(){
    cout<<"END"<<endl;
    
    return 2;
}


class person{
    string name;
    
};
void swap (int &a , int &b) {
    int temp;
    
    cout<<"in swap: "<<&a<<&b<<endl;
    temp = a;
    a = b;
    b = temp;
}
int hrishichaudhari(){
    cout<<"hrishi is called "<<endl;
    return 0;
}

int main(int argc, const char * argv[]) {
   
    f(3);
    
     NAME2(hrishi,chaudhari)();
    
    
    int arr[] = {3,5,4,3,4,};
    int size = SIZE(arr);
    
    cout<<"Sizeo fo arra os: "<<size <<endl;
    int number1 = 10;
    int number2 = 12;
    
    int *p = &number1;
    
    
    int (*ptrfun)();
    
    ptrfun = swap;
    
    ptrfun();
   
//    int &refNumber1 = number1;
//    
//    refNumber1 = 1222;
//  //  refNumber1 = &number2;
//    
//    cout<<refNumber1<<endl;
//    
//    cout<< *p<<endl;
//    const int a = 1;
//    
//    const int &refa = number2;
//    
//    
//    int &refNumber = number1;
//    
//    refNumber = number2;
//    
//    cout<< refNumber<<endl;
//     cout<<"in main: "<<&number1<<&number2<<endl;
//    swap(number1,number2);
//    
//    
//    
//    cout<< number1<<"\t"<<number2<<endl;
//
    
    int i =0;
    int &ref = i;
    ref = 10;
    int j =12;
  
   
    
    return 0;
}



int f(int a)
{
    cout<<a<<endl;
    return a;
}

int f(int a , int b)
{
    cout<< a<<b<<endl;
    return b;
}