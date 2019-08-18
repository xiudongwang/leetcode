#include <vector>
#include <iostream>
using namespace std;

    bool check(const string &str, const string &pattern){
        int j=0;
        int i=0;
        for(i=0; i<str.size() && j< pattern.size(); i++){
            cout<<"str["<<i<<"]"<<"="<<str[i]<<endl;
            cout<<"pattern["<<j<<"]"<<"="<<pattern[j]<<endl;
     
            if(str[i] == pattern[j]){
                j++;
            }else{
                if(str[i]>='A' && str[i]<='Z') {
                    cout<<"------"<<endl;
                    return false;
                }
            }
            i++;
        }
        if(j!=pattern.size()){
            cout<<"i="<<i<<" j="<<j<<endl;
            return false;
        }
        while(i<str.size()){
            if(str[i]>='A' && str[i]<='Z') {
                cout<<"+++++++"<<endl;
                return false;
            }
            i++;
        }
        return true;
}


int main()
{
	cout<<check("FooBar", "FB")<<endl;
}
