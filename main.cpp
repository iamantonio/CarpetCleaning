#include <iostream>

double cost = 0; // initializing cost to 0
void get_cost (int numRoom, double priceRoom){ // method that will calculate the number of room and calculate the costs.
    cost += numRoom * priceRoom;
}

double subtotal(double cost, double tax){ // method to calculate the taxes based on the total costs.
    return (cost * tax) + cost;
}

int main() {
    int numberOfLargeRooms;
    int numberOfSmallRooms;
    double priceForLargeRoom = 35;
    double priceForSmallRoom = 25;
    double taxRate = 0.09;


    // Greeting
    std::cout << "********* Tony's Carpet Cleaning Service **********" << std::endl;
    std::cout << "\nPlease enter the number of rooms you want carpet clean below." << std::endl;
    std::cout << "\nNumber of large rooms: ";
    std::cin >> numberOfLargeRooms;
    std::cout <<"Number of small rooms: ";
    std::cin >> numberOfSmallRooms;
    std::cout <<"\nThe price for cleaning a small room is: $" << priceForSmallRoom << std::endl;
    std::cout << "\nThe price for cleaning a large room is: $" << priceForLargeRoom << std::endl;
    get_cost(numberOfSmallRooms, priceForSmallRoom);
    get_cost(numberOfLargeRooms, priceForLargeRoom);
    std::cout << "The costs for cleaning " << numberOfSmallRooms << " small rooms plus " << numberOfLargeRooms << " large rooms is $" << cost << std::endl;
    std::cout << "Applying the tax rate of " << taxRate * 100 << "%" << std::endl;
    std::cout << "The subtotal is $" << subtotal(cost, taxRate) << std::endl;
    return 0;
}
