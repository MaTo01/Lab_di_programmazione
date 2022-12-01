#include <iostream>
#include <array>

bool isPalindrome(const char* first, const char* last){
    int length = (last-first)/sizeof(char);
    for(int i = 0; i < length/2; i++){
        if(first[i] != last[-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    char charArray1[] = {'c','i','a','o'};
    char charArray2[] = {'a','n'/*,'a'*/,'n','a'};
    
    int dim1 = sizeof(charArray1)/sizeof(charArray1[0]);
    int dim2 = sizeof(charArray2)/sizeof(charArray2[0]);
    
    std::string array1 = "";
    for(int i = 0; i < dim1; i++){
        array1 = array1 + charArray1[i];
    }
    
    std::string array2 = "";
    for(int i = 0; i < dim2; i++){
        array2 = array2 + charArray2[i];
    }
   
    char* first1 = &charArray1[0];
    char* last1 = &charArray1[dim1];
    
    char* first2 = &charArray2[0];
    char* last2 = &charArray2[dim2];
    
    std::cout << std::endl << "Verifica con isPalindrome(const char* first, const char* last)"<<std::endl;;
    if(isPalindrome(first1, last1) == true) {std::cout << "'" << array1 << "'" << " e' palindroma";}
    else {std::cout <<"'" << array1 << "'" << " non e' palindroma";}
    
    std::cout << std::endl;
    if(isPalindrome(first2, last2) == true) {std::cout << "'" << array2 << "'" << " e' palindroma" << std::endl;;}
    else {std::cout <<"'" << array2 << "'" << " non e' palindroma" << std::endl;}
   
    return 0;

}
