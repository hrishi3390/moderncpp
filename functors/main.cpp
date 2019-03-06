//
//  main.cpp
//  functors
//
//  Created by Hrishikesh Chaudhari on 17/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//


#include <iostream>

using namespace std;

class DgPendingUninstall
{
public:
   // DgPendingUninstall(DgAgent& a): DgPending(a) {}
    ~DgPendingUninstall() {}
    void operator()() {
        cout<<"functors is called"<<endl;
    }
    bool uninstall(){ return 1;}
    bool isChromePoliciesChanged() const;
    void removeChromePolicies();
    void removeDGExtension();
};


int main(int argc, const char * argv[]) {
    
    DgPendingUninstall *dg = new DgPendingUninstall;
    (*dg)();
  //  cout<<dg.uninstall()<<endl;
    return 0;
}
