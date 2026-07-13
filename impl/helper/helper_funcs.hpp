// impl/helper/helper_funcs.hpp

#include <string>
#include <iostream>

template<typename T>
[[nodiscard]] T safeDivision(T num1, T num2)
{
    if (num2 == 0) {
        std::cout << "ERR: Division by zero.\n";
        return nullptr;
    }

    return num1 / num2;
}

template<typename T>
[[nodiscard]] T calculateDelta(T initialValue, T finalValue, const std::string& valueName)
{
    if (initialValue == 0 || finalValue == 0) {
        std::cout << "Can not calculate delta if initialValue is 0 or finalValue is 0.\n";
        return nullptr;
    }

    T delta{finalValue - initialValue};
    std::cout << "Delta " << valueName << ": " << delta << '\n';
    
    return delta;
}

template<typename T>
void displayResult(
    const std::string& expectedResult,
    const T var1,
    const T var2,
    const T result,
    const std::string& var1Name,
    const std::string& var2Name,
    const char op
)
{
    std::cout << var1 << " (" << var1Name << ") " 
        << op << " " << var2 << " (" << var2Name << ") = "
        << result << " (" << expectedResult << ")" << '\n';
}