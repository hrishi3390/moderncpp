//
//  main.cpp
//  perfectForwarding
//
//  Created by Hrishikesh Chaudhari on 20/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include "Integer.hpp"
#include <string>

using namespace std;

class Employee{
    
    string name;
    Integer m_id;
    
public:
    
    template<typename T1, typename T2>
    Employee(T1 &&name, T2 &&id):
    name(forward<T1>(name)),
    m_id(forward<T2>(id))
    {
    }
    
};

int main(int argc, const char * argv[]) {
    
    string buff;
    
    getline(cin, buff);
    cout<<buff<<endl;
    
    //Employee a ("hrishi", Integer{100});
       return 0;
}
