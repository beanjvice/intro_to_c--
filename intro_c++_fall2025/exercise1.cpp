// // #include <iostream>
// // using namespace std;

// // int main() 
// // {
// //     double fahrenheit, celsius;
// //     cout << "Enter temperature in Fahrenheit: ";
// //     cin >> fahrenheit;

// //     celsius = (fahrenheit - 32) / 1.8;
// //     cout << "Temperature in Celcius: " << celsius << endl;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     double price, cost, discount, grossProfit, netProfit;
// //     int quantity;

// //     cout << "Enter price: ";
// //     cin >> price;
// //     cout << "Enter cost: ";
// //     cin >> cost;
// //     cout << "Enter quantity: ";
// //     cin >> quantity;
// //     cout << "Enter discount percent (e.g. 0.2 for 20%): ";
// //     cin >> discount;

// //     grossProfit = (price - cost) * quantity;
// //     netProfit = (1 - discount) * grossProfit;

// //     cout << "Gross Profit: "<< grossProfit << endl;
// //     cout << "Net Profit after discount: "<< netProfit << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main () 
// {
//     double currentSalary, raisePercent, newSalary;

//     cout << "Enter current salary: ";
//     cin >> currentSalary;
//     cout << "Enter raise percent (ex: 0.05 for 5%): ";
//     cin >> raisePercent;

//     newSalary = currentSalary * (1 + raisePercent);
//     cout << "New Salary: " << newSalary << endl;
//     return 0;
// }

#include <iostream> 
using namespace std;
int main () 
{
    const float PI = 3.14159;
    float radius;
    cout << "Enter the radius of circle " << endl;
    cin >> radius;
    cout << "The area is = " << PI * radius * radius << endl;
    return 0;
}