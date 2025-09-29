#include <iostream>
#include <sstream>

int main() {
    std::string line;
    std::cout << "Enter an expression: ";
    std::getline(std::cin,line);

    long long a, b;
    char op;
    std::stringstream ss(line);

    if(!(ss >> a >> op >> b) || (ss >> std::ws, !ss.eof())) {
        std::cerr << "Invalid format. Use: <int><op><int>\n";
        return 1;
    }

    long long result;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break; 
        case '*': result = a * b; break;
        case '/':
            if (b == 0) {
                std::cerr << "Error: division by zero. \n";
                return 1;
            }
            result = a / b;
            break;
        default:
        std::cerr << "Unknown operator. Use +, -, *, or /.\n";
        return 1;
    }
        std::cout << a << ' ' << op << ' ' << b << " = " << result << '\n';
        return 0;
}




#include <iostream>

char grade_if_else(int score) {
    if (score < 0 || score > 100) return '?';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

char grade_switch(int score) {
    if (score < 0 || score > 100) return '?';
    switch (score / 10) {
        case 10:
        case 9:  return 'A';
        case 8:  return 'B';
        case 7:  return 'C';
        case 6:  return 'D';
        default: return 'F';
    }
}

int main() {
    int score;
    std::cout << "Enter test score (0..100): ";
    if (!(std::cin >> score)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    char g1 = grade_if_else(score);
    if (g1 == '?') {
        std::cout << "score is out of range\n";
        return 0;
    }
    std::cout << "[if-else] Letter grade: " << g1 << '\n';

    char g2 = grade_switch(score);
    std::cout << "[switch ] Letter grade: " << g2 << '\n';

    return 0;
}
