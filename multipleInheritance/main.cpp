////
////  main.cpp
////  multipleInheritance
////
////  Created by Hrishikesh Chaudhari on 07/01/19.
////  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
////
//
//#include<iostream>
//using namespace std;
////
////class Box {
////protected:
////    double width;
////};
////
////class SmallBox:Box { // SmallBox is the derived class.
////public:
////    void setSmallWidth( double wid );
////    double getSmallWidth( void );
////};
////
////// Member functions of child class
////double SmallBox::getSmallWidth(void) {
////    return width ;
////}
////
////void SmallBox::setSmallWidth( double wid ) {
////    width = wid;
////}
////
////// Main function for the program
////int main() {
////    SmallBox box;
////    
////    // set box width using member function
////    box.setSmallWidth(5.0);
////    cout << "Width of box : "<< box.getSmallWidth() << endl;
////    
////    return 0;
////}
//
//
////class Storable{
////public:
////   // virtual const char*get_file()=0;
////   // virtual void read()=0;
////    virtual void write(){
////        cout<<"Hi"<<endl;
////    }
////  //  virtual ~Storable() { write(); }// to be called from overriding destructors (see §15.2.4.1)
////};
////
////
////class Transmitter:public Storable{
////public:
////    void write(){
////        cout<<"Write: Transmitter"<<endl;
////    }
////};
////
////class Receiver:public Storable{
////public:
////    void write(){
////        cout<<"Write: Receiver"<<endl;
////    }
////};
////
////
////class Radio:public Transmitter,public Receiver{
////public:
////    void write();
////};
////void Radio::write() {
//////    Transmitter::write();
//////    Receiver::write();
////    cout<<"radio write"<<endl;
////}
//
////
////
////int main(){
////    
////    Receiver *r = new Receiver;
////    r->write();
////    
////}
////
////class Person {
////    // Data members of person
////public:
////    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
////    Person()     { cout << "Person::Person() called" << endl;   } 
////};
////
////class Faculty : public Person {
////    // data members of Faculty
////public:
////    Faculty(int x):Person(x)   {
////        cout<<"Faculty::Faculty(int ) called"<< endl;
////    }
////};
////
////class Student : public Person {
////    // data members of Student
////public:
////    Student(int x):Person(x) {
////        cout<<"Student::Student(int ) called"<< endl;
////    }
////};
////
////class TA : public Faculty, public Student  {
////public:
////    TA(int x):Student(x), Faculty(x)   {
////        cout<<"TA::TA(int ) called"<< endl;
////    }
////};
////
////int main()  {
////    TA ta1(30);
////}
//
//
//
//
//class Window{
//public:
//    
//    virtual void draw(){
//        cout<<"Window draw is called"<<endl;
//    }
//};
//
//
//class Window_with_border: public virtual Window {
//public:
//    
//    void own_window(){
//         cout<<"Window_with_border is called"<<endl;
//    }
//    
//    void draw(){
//        Window::draw();
//        own_window();
//    }
//    
//};
//
//
//class Window_with_menu: public virtual Window {
//public:
//    void own_window(){
//        cout<<"Window_with_menu is called"<<endl;
//    }
//   void draw(){
//        Window::draw();
//       own_window();
//    }
//    
//};
//
//class Clock : public Window_with_border, public Window_with_menu {
//public:
//    
//    void own_draw(){
//        cout<<"own_draw in clock"<<endl;
//        
//    } // display the clock face and hands
//    void draw();
//    
//};
//
//void
//Clock::draw()
//{
//    Window::draw();
//    Window_with_border::draw();
//    Window_with_menu::own_window();
//    own_draw(); // display the clock face and hands
//}
//
//
//int main(){
//    Clock c;
//    c.draw();
//    cout<<"In main";
//}
//



//
//#include<iostream>
//using namespace std;
//
//class A
//{
//    int x;
//public:
//    void setX(int i) {x = i;}
//    void print() { cout << x; }
//};
//
//class B:  public A
//{
//public:
//    B()  { setX(10); }
//};
//
//class C:  public A
//{
//public:
//    C()  { setX(20); }
//};
//
//class D: public B, public C {
//};
//
//int main()
//{
//    D d;
//    d.B::print();
//    return 0;
//}


#include<iostream>
using namespace std;

class A
{
    int x;
public:
   // A(){}
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B: virtual public A
{
public:
    B():A(10) {  }
};

class C:  virtual public A
{
public:
    C():A(10) {  }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    return 0;
}
