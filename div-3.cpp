#include <iostream>
#include <stack>

std::string reduceString(const std::string& inputString) {
    std::stack<char> charStack;

    for (char ch : inputString) {
        if (!charStack.empty() && charStack.top() == ch) {
            charStack.pop();
        } else {
            charStack.push(ch);
        }
    }

    std::string result;
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main() {
    std::string inputStr = "abacdc";
    std::string result = reduceString(inputStr);

    std::cout << "Minimum length: " << result.length() << std::endl;
    std::cout << "Reduced string: " << result << std::endl;

    return 0;
}
