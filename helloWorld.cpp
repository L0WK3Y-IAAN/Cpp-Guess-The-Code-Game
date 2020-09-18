#include <iostream>


int main()
{
//!!! BE SURE TO USE UPPERCAMAL CASE DUE TO UNREAL's VARIABLE NAMING CONVENTIONS

// Expression Statements - Printing to console and ending line.
    system("cls");
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n";

//Declaring Variables
    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;
    const int CodeD = 5;
//Assignment Operator 

    CodeA = 10;
    //d = 2; //This will give an error because const prevents variable from being changed. 

//Using Operators
    int CodeSum = CodeA + CodeB + CodeC + CodeD ;
    int CodeProduct = CodeA * CodeB * CodeC * CodeD;

//Expression Statements - Printing to console and ending line.
    std::cout << std::endl;
    std::cout << "[+] There are 4 numbers in the code";
    std::cout << "\n[+] The codes add up to: " << CodeSum;
    std::cout << "\n[+] The product of the code is: " << CodeProduct;

    int GuessA, GuessB, GuessC, GuessD;
    std::cout << std::endl;
    std::cout << "\nEnter your guess for the code below \n";
    std::cout << "Your guess: ";
    std::cin >> GuessA >> GuessB >> GuessC >> GuessD;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC + GuessD;
    int GuessProduct = GuessA * GuessB * GuessC * GuessD;


//Win conditions.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You've hacked the terminal!";
    }
    else{
        std::cout << "Incorrect code. Try again.";
    }

    return 0;


/*Vocabulary 
Expression Statement - An expression that ends in a semicolon (ex. myVar = 5; or std::cout << "This is an expression statement";)

Declaration Statement - Declares a variable. (ex. int a = 5; or int sum = a + b;)

Initializing a variable - Giving a value to an already declared variable.

Main Function - Initializes the program.

Preprocessor Directive - Headers that are executed at the start of a program.

Extraction Operator - (<< or >>)
const - prevents a variable from being changed.

*/
}