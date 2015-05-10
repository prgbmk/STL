//
//  main.cpp
//  STL_Practice
//
//  Created by 박문기 on 2015. 5. 11..
//  Copyright (c) 2015년 박문기. All rights reserved.
//

#include <iostream>
#include <vector>
#include "myheader.h"
using namespace std;

int main() {
    vector<int> vec;
    
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    
    print(vec);
    
    
    return 0;
}
