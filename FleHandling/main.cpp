//
//  main.cpp
//  FleHandling
//
//  Created by Hrishikesh Chaudhari on 04/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

//this is for file in handling in c++ . I need to master this for sure

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string fileName = "/Users/hrishikeshchaudhari/Desktop/backup_2/simplekext/CaveOfPrograming/FleHandling/database";
    
    
    ofstream fileWriteHandle;
    
    fileWriteHandle.open(fileName, ios::app);
    
    if(fileWriteHandle.is_open())
    {
        fileWriteHandle<<"This is new line\n";
        fileWriteHandle.close();
    }
    
    
    
    ifstream fileReadHandle;
    fileReadHandle.open(fileName);
    string line;
    if(fileReadHandle.is_open())
    {
        while(getline(fileReadHandle, line))
        {
             cout<< line<<endl;
        }
        
        fileReadHandle.close();
       
    }
    
    
    
    
    return 0;
}
