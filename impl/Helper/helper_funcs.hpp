// impl/helper/helper_funcs.hpp

#include <string_view>
#include <iostream>

template<typename T>
[[nodiscard]] T safeDivision(T num1, T num2)
{
    if (num2 == 0) {
        std::cout << "ERR: Division by zero.\n";
        return 0;
    }

    return num1 / num2;
}

template<typename T>
[[nodiscard]] T calculateDelta(T initialValue, T finalValue, std::string_view valueName)
{
    if (initialValue == 0 || finalValue == 0) {
        std::cout << "Can not calculate delta if initialValue is 0 or finalValue is 0.\n";
        return 0;
    }

    T delta{finalValue - initialValue};
    
    return delta;
}

template<typename T>
void displayResult(
    std::string_view expectedResult,
    const T var1,
    const T var2,
    const T result,
    std::string_view var1Name,
    std::string_view var2Name,
    const char op
)
{
    std::cout << var1 << " (" << var1Name << ") " 
        << op << ' ' << var2 << " (" << var2Name << ") = "
        << result << " (" << expectedResult << ")" << '\n';
}

template<typename T>
void displayResultWithFraction(
    std::string_view expectedResult,
    const double fraction,
    const T var1,
    const T var2,
    const T result,
    std::string_view var1Name,
    std::string_view var2Name,
    const char op1,
    const char op2
)
{
    std::cout << fraction << ' ' << op1 << ' ' << var1 << " (" << var1Name <<  ") " << op2
        << ' ' << var2 << "^2 (" << var2Name << ")" << " = " << result << " (" << expectedResult << ") \n";
}

template<typename T>
void displayResultThreeVariables(
    std::string_view expectedResult,
    const T var1,
    const T var2,
    const T var3,
    const T result,
    std::string_view var1Name,
    std::string_view var2Name,
    std::string_view var3Name,
    const char op1,
    const char op2
)
{
    std::cout << var1 << " (" << var1Name << ") " <<
        op1 << ' ' << var2 << " (" << var2Name << ") "
        << op2 << ' ' << var3 << " (" << var3Name << ") = "
        << result << " (" <<  expectedResult << ") \n";
}