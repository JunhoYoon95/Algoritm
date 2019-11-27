//
//  체육복.cpp
//  Algo
//
//  Created by Junho's Mac on 2019/11/28.
//  Copyright © 2019 Junho's Mac. All rights reserved.
//

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> student(n,1);
    
    for(int i = 0; i < lost.size(); i++)
    {
        student[lost[i]-1]--;
    }
    for(int i = 0; i < reserve.size(); i++)
    {
        student[reserve[i]-1]++;
    }
    
    for(int i = 0; i < n-1; i++)
    {
        if(student[i] == 0)
        {
            if(student[i+1] == 2)
            {
                student[i+1]--;
                student[i]++;
            }
        }
        if(student[i] == 2)
        {
            if(student[i+1] == 0)
            {
                student[i+1]++;
                student[i]--;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(student[i] != 0)
        {
            answer++;
        }
    }
    
    return answer;
}
