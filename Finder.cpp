/*
 * @Author: yuheng li a1793138
 * @Date: 2023-04-03 10:34:00
 * @LastEditors: yuheng 
 * @LastEditTime: 2023-04-03 11:27:09
 * @FilePath: \undefinedc:\Users\ngfx1\OneDrive - University of Adelaide\桌面\adds\week5\Finder.cpp
 * @Description: 
 * 
 * Copyright (c) ${2023} by ${yuheng li}, All Rights Reserved. 
 */
#include "Finder.h"
#include <iostream>

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found;
            if(result.size()>0){
                found = s1.find(s2.substr(0,i), result.back());
            }else{
                found = s1.find(s2.substr(0, i));
            }
            if (found != string::npos) {
                result.push_back(found);
            } else {
                for(i;i<=s2.size();i++){
                result.push_back(-1);
            }
            return result;
        }
        
    }
    return result;
    }