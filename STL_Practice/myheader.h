//
//  myheader.h
//  STL_Practice
//
//  Created by 박문기 on 2015. 5. 11..
//  Copyright (c) 2015년 박문기. All rights reserved.
//

#ifndef STL_Practice_myheader_h
#define STL_Practice_myheader_h

template <typename T>
void print(const T& v, const char* message=""){
    typename T::const_iterator it;
    std::cout << message;
    std::cout << "(";
    for(it = v.begin(); it != v.end(); ++it){
        std::cout << *it<<' ';
    }
    std::cout << ")"<<std::endl;
    
}

#endif
