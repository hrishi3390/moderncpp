//
//  main.cpp
//  copyConstructor
//
//  Created by Hrishikesh Chaudhari on 13/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <cstring> // for strlen()
#include <cassert> // for assert()

using namespace std;

class Animal{
    string name;
    static int st;
    
public:
    
    Animal(){
        cout<< "Default constructor is called"<<endl;
    }
    Animal(string name)
    {
        this->name = name;
    }
    Animal(const Animal& other)
    {
        cout<<"Copy Constructor is called"<<endl;
        this->name = other.name;
    }
//    void operator=(const Animal& other)
//    {
//        cout<<"operator overloading called.."<<endl;
//        name = other.name;
//    }
    void speak(){
        cout<<"My name is "<<name<<endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    
    void print(Animal a)
    {
        a.speak();
    }
    
};

Animal object()
{
    return Animal("hrishi");
}


int main(int argc, const char * argv[]) {
    
    Animal animal1;
    animal1.setName("Tom");
    animal1.speak();
    
    
   // Animal animal2 = animal1;
//    Animal animal3(animal2);
    
    //animal1.print(animal1);
    
    Animal animal10 = object();
    
    animal10.speak();
//    animal3.speak();
    
//    Animal q; // constructor is used to build q.
//    q.setName("Mickey");
//    Animal r(q);        // copy constructor is used to build r.
//    Animal p = q;       // copy constructor is used to initialize in declaration.
//    p = q;
        return 0;
}

//class Simple{
//    int *x;
//    int N;
//public:
//    
//    Simple():x(NULL){
//        
//    }
//    void allocateX(int N)
//    {
//        this->N = N;
//        x = new int(this->N);
//    }
//    Simple(const Simple &other)
//    {
//        cout<<"copy constructor is called"<<endl;
//        N= other.N;
//        x = new int(N);
//    }
//    int getX()
//    {
//        return *x;
//    }
//    ~Simple()
//    {
//        delete x;
//    }
//};
//int main(int argc, const char * argv[]) {

//    Simple ob1;
//    ob1.allocateX(10);
//    
//    {
//    Simple ob2 = ob1;   //copy constructor - shallow copy
//    }
    
//    Simple ob3;
//    
//    ob3 = ob2;
    
   // cout<<ob1.getX()<<endl;
 //   cout<<ob2.getX()<<endl;
//    cout<<ob3.getX()<<endl;
    
 //   ob2.allocateX(20);
//    ob3 = ob2;

    
 //   cout<<ob1.getX()<<endl;
 //   cout<<ob2.getX()<<endl;
//    cout<<ob3.getX()<<endl;
    
//}