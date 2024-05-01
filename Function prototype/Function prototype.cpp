#include <iostream>
#include <cmath>

// Function prototype
template<typename T>
T distance(T x1, T y1, T x2, T y2);

int main() {
    // Variables to store coordinates of two points
    int x1, y1, x2, y2;

    // Accepting input from the user
    std::cout << "Enter the value of x1: ";
    std::cin >> x1;
    std::cout << "Enter the value of y1: ";
    std::cin >> y1;
    std::cout << "Enter the value of x2: ";
    std::cin >> x2;
    std::cout << "Enter the value of y2: ";
    std::cin >> y2;

    // Calculating distance using the distance function
    int dist = distance(x1, y1, x2, y2);

    // Displaying the distance
    std::cout << "The distance between point 1 and point 2 is " << dist << std::endl;

    return 0;
}

// Function to calculate Euclidean distance
template<typename T>
T distance(T x1, T y1, T x2, T y2) {
    return static_cast<T>(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}
