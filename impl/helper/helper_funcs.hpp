// impl/helper/helper_funcs.hpp

#include <string>
#include <iostream>

template<typename T>
T safeDivision(T num1, T num2)
{
    if(num2 == 0){
        std::cout<<"ERR: Division by zero.\n";
    }

    return num1 / num2;
}

template<typename T>
void displayResult(
    const T var1,
    const T var2,
    const T result,
    const std::string& var1Name,
    const std::string& var2Name,
    const char op
)
{
    std::cout << var1 << " (" << var1Name << ") " 
        << op << " " << var2 <<" (" << var2Name << ") = "
        << result << '\n';
}