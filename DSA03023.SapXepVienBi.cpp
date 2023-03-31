#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,t=0,d=0,x=0,cnt=0,i;
    string s;
    cin >> n >> s;
    for(i=0;i<s.size();i++){        // Đếm số bi mỗi loại
        if(s[i]=='T') t++;
        else if(s[i]=='D') d++;
        else if(s[i]=='X') x++;
    }
    for(int i=0;i<x;i++){           //Xếp bi xanh lên đầu
        if(s[i]=='T'){              //Nếu bi hiện tại là trắng thì tìm bi xanh trong khoảng x trở đi
            auto it=s.find('X',x);
            if(it!=string::npos){
                swap(s[i],s[it]);
                cnt++;
            }
        }
        else if(s[i]=='D'){         //Nếu bi hiện tại là đỏ thì ưu tiên tìm bi xanh trong khoảng từ x+t trở đi, nếu không tìm được thì tìm trong khoảng x trở đi
            auto it=s.find('X',x+t);
            if(it==string::npos) it=s.find('X',x);
            if(it!=string::npos){
                swap(s[i],s[it]);
                cnt++;
            }
        }
    }
    for(int i=x;i<x+t;i++){
        if(s[i]=='D'){
            auto it=s.find('T',x+t);    // Tương tự ở trên
            if(it!=string::npos){
                swap(s[i],s[it]);
                cnt++;
            }
        }
    }
    cout << cnt ;
}