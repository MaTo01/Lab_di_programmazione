#include <iostream>
#include <array>

bool isPalindrome(const std::string& s){
    for(int i = 0; i < s.length()/2; i++){
        if(toupper(s[i]) != toupper(s[s.length()-(1+i)])){
            return false;
        }
    }
    return true;
}

int main()
{
    std::string s1 = "ciao";
    std::string s2 = "Anana";
    
    std::cout << std::endl << "Verifica con isPalindrome(const string& s)"<<std::endl;
    if(isPalindrome(s1) == true) {std::cout <<"'" << s1 << "'" << " e' palindroma";}
    else {std::cout << "'" << s1 << "'" << " non e' palindroma";}
    
    std::cout << std::endl;
    if(isPalindrome(s2) == true) {std::cout <<"'" << s2 << "'" << " e' palindroma" << std::endl;}
    else {std::cout << "'" << s2 << "'" << " non e' palindroma" << std::endl;}
    
    return 0;
}