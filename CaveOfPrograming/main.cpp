//
//#include <iostream>
//
//
//using namespace std;
//
//namespace Stack {
//    struct Rep;
//    typedef Rep& stack;
//    
//    stack create();
//    void destroy(stack s);
//    
//    void push(stack s , char c);
//    char pop(stack s);
//    
//}
//
//
//namespace Stack {
//    const int max_size = 100;
//    
//    struct Rep {
//        char v[max_size];
//        int top;
//    };
//    
//    
//}
//class stack{
//    int top;
//    int element;
//    void push(){
//        cout<< "Element is pushed into a stack"<<endl;
//    }
//    
//    void pop(){
//        cout<< "Element is popped out from the stack"<<endl;
//    }
//};
//
//
//
//int main()
//{
//    
//    
//    
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student
//{
//protected:
//    int id;
//public:
//    void get_id(int i)
//    {
//        id = i;
//    }
//    void put_id(void)
//    {
//    }
//};
//
//class Assessment:public Student
//{
//protected:
//    float sect1,sect2;
//public:
//    void get_score(float a, float b)
//    {
//        sect1 = a;
//        sect2 = b;
//    }
//    void put_score()
//    {
//    }
//};
//
//class Events
//{
//protected:
//    float points;
//public:
//    void getpoints(float p)
//    {
//        points = p;
//    }
//    
//    void putpoints(void)
//    {
//    }
//};
//class Result: public Assessment, public Events
//{
//    float total;
//public:
//    void display(void);
//};
//
//void Result::display(void)
//{
//    total = sect1 + sect2 + points;
//    put_id();
//    put_score();
//    putpoints();
//    cout << "Total Points = " << total << "\n";
//}
//
//int main()
//{
//    Result Student;
//    Student.get_id(420);
//    Student.get_score(43, 49.5);
//    Student.getpoints(9.0);
//    Student.display();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Chest {
//public:
//    
//    Chest(double l = 3.0, double b = 5.0, double h = 4.0) {
//        cout <<"Constructor called!!" << endl;
//        length = l;
//        breadth = b;
//        height = h;
//    }
//    double Volume() {
//        return length * breadth * height;
//    }
//    int compare(Chest chest) {
//        return this->Volume() > chest.Volume();
//    }
//    
//private:
//    double length;
//    double breadth;
//    double height;
//};
//
//int main(void) {
//    Chest GrandChest(1.6, 2.8, 3.9);
//    Chest GiantChest(6.5, 4.0, 8.0);
//    
//    if(GrandChest.compare(GiantChest)) {
//        cout << "GiantChest is smaller than GrandChest" <<endl;
//    } else {
//        cout << "GiantChest is equal to or larger than GrandChest" <<endl;
//    }
//    
//    return 0;
//}


//1
//3*2
//4*5*6
//10*9*8*7

#include <iostream>
using namespace std;

int main()

{
    int N = 4;
    static int i;
    
}

//
//#include<iostream>
//using namespace std;
//
//class Sample
//{
//    int var;
//public:
//    Sample(int v = 0) {var = 100;}
//    int getValue() const {return var;}
//};
//
//int main()
//{
//    const Sample s;
//    cout << s.getValue();
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    const volatile int local = 10;
//    int *ptr = (int*) &local;
//    
//    cout<<"Initial value of local : "<<local<<endl;
//    
//    *ptr = 100;
//    
//    cout<<"Modified value of local: "<<local<<endl;
//    
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//    int n = -1;
//    try
//    {
//        cout << "Inside try \n";
//        if (n < 0)
//        {
//            throw n;
//            cout << "After throw \n";
//        }
//    }
//    catch (int n )
//    {
//        cout << "Exception Caught \n";
//    }
//    
//    cout << "After catch \n";
//    return 0;
//}


//#include<iostream>
//using namespace std;
//enum  Jupiter
//{
//    temp = 12
//};
//int main()
//{
//    double age = 21;
//    age /= temp;
//    cout << "If Sam lived on Jupiter, he would be " << age <<" years old"<< endl;
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//enum sample
//{
//    A = 12, B, C
//};
//
//int main()
//{
//    cout << A << B<< C;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int i;
//    enum days
//    {
//        Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
//    };
//    for (i = Tue; i <= Sat; i++)
//        cout << i;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i;
//    char *arr[] = {"C++", "Django", "Swift", "Python"};
//    char *(*ptr)[4] = &arr;
//    cout << ++(*ptr)[2];
//    
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//void swap(int &a, int &b);
//
//int main()
//{
//    int a = 10, b = 13;
//    swap(a, b);
//    cout << "In main " << a << b;
//    return 0;
//}
//
//void swap(int &a, int &b)
//{
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//    cout << "In swap " << a << b;
//}
