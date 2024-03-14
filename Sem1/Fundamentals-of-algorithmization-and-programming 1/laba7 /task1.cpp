#include "iostream"
#include "string"
std::string pos_num(int num) {
    std::string s;
    while (num != 0) {
        if (num % 2 == 0) s = "0" + s;
        if (num % 2 == 1) s = "1" + s;
        num /= 2;
    }
    while (s.length() < 8) {
        s = "0" + s;
    }
    return s;
}
std::string neg_num(int num) {
    std::string s;
    num = -num;
    while (num != 0) {
        if (num % 2 == 0) s = "0" + s;
        if (num % 2 == 1) s = "1" + s;
        num /= 2;
    }
    while (s.length() < 8) {
        s = "0" + s;
    }
    s[0] = '1';
    return s;
}
std::string reverse_code(int num){
    if(num >= 0) return pos_num(num);
    else{
        std::string s = neg_num(num);
        for(int i = 1;i < s.length();++i){
            if(s[i] == '1') {
                s[i] = '0';
                continue;
            }
            if(s[i] == '0'){
                s[i] = '1';
                continue;
            }
        }
        return s;
    }
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<reverse_code(num);
}
