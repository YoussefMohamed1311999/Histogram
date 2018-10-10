#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>Histogram;
    int y=true;
    int grade;
    vector<int>num;
    vector<int>grades;
    while (true){
        y=true;
        cin>>grade;
        if(grade==-1){
            break;
        }
        if (grade<0 && grade!=-1){
            cout<<"enter a valid grade"<<endl;
            continue;
        }
        for (unsigned int i=0;i<grades.size();i++){
            if(grade==grades[i]){
                y=false;
            }
            continue;
        }
        if (y==true){
         num.push_back(grade);
        }
        grades.push_back(grade);
        }
        sort(num.begin(),num.end());
        for (unsigned int i=0; i<num.size(); i++){
            int ctr=0;
            for (unsigned int j=0;j<grades.size();j++){
                if  (num[i]==grades[j]){
                    ctr=ctr+1;
                }
            }
        Histogram.push_back(ctr);
        }
        for(unsigned int i=0;i<num.size();i++){
            cout<<"number of"<<num[i]<<"'s="<<Histogram[i]<<endl;
        }
    return 0;
    }
