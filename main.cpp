//This brings in the iostream library
#include <iostream>

int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}

int main(){   
    int first_number {3}; //Staement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;    

    int sum = first_number + second_number;
    std::cout << "Sum 1: " << sum << std::endl;

    sum = addNumbers(12, 13);
    std::cout << "Sum 2: " << sum << std::endl;

    sum = addNumbers(12, 14);
    std::cout << "Sum 3: " << sum << std::endl;

    std::cout << "Sum 4: " << addNumbers(14, 16) << std::endl;

    std::cout << "Multiplication 1: " << multiplyNumbers(4,5) << std::endl;

    return 0;
}