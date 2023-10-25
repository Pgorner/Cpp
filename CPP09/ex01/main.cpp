#include <iostream>
#include <stack>
#include <map>
#include <sstream>
#include <cctype>
#include <cstdlib>

std::map<char, int> getOperatorPrecedence() {
    std::map<char, int> precedence;
    precedence['+'] = 1;
    precedence['-'] = 1;
    precedence['*'] = 2;
    precedence['/'] = 2;
    return precedence;
}

std::map<char, int> convertPolishExpressionToMap(const std::string& expression) {
    std::map<char, int> expressionMap;
    std::stack<char> operators;

    std::map<char, int> precedence = getOperatorPrecedence();

    std::istringstream iss(expression);
    std::string token;
    while (iss >> token) {
        if (isdigit(token[0])) {
            expressionMap[token[0]] = 0;  // Assuming single-digit operands
        } else {
            while (!operators.empty() && precedence[operators.top()] >= precedence[token[0]]) {
                expressionMap[operators.top()] = 0;
                operators.pop();
            }
            operators.push(token[0]);
        }
    }

    while (!operators.empty()) {
        expressionMap[operators.top()] = 0;
        operators.pop();
    }

    return expressionMap;
}

int calculateExpression(const std::map<char, int>& expressionMap) {
    std::stack<int> operands;
    std::map<char, int> precedence = getOperatorPrecedence();

    for (std::map<char, int>::const_iterator it = expressionMap.begin(); it != expressionMap.end(); ++it) {
        char token = it->first;

        if (isdigit(token)) {
            operands.push(token - '0'); // Convert digit character to integer
        } else {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            switch (token) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 != 0) {
                        operands.push(operand1 / operand2);
                    } else {
                        std::cerr << "Error: Division by zero" << std::endl;
                        return 0; // Error handling for division by zero
                    }
                    break;
                default:
                    std::cerr << "Error: Unknown operator '" << token << "'" << std::endl;
                    return 0; // Error handling for unknown operator
            }
        }
    }

    if (!operands.empty()) {
        return operands.top();
    } else {
        std::cerr << "Error: Expression could not be evaluated" << std::endl;
        return 0; // Error handling for invalid expression
    }
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }

    std::string polishExpression = argv[1];
    std::map<char, int> expressionMap = convertPolishExpressionToMap(polishExpression);

    int result = calculateExpression(expressionMap);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
