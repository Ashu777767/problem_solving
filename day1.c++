#include <iostream>
#include <ctime>

int main() {
    // Get current time as time_t
    std::time_t currentTime = std::time(nullptr);

    // Convert to local time
    std::tm* localTime = std::localtime(&currentTime);

    // Create a buffer to store the formatted time
    char timeStr[100];

    // Format: YYYY-MM-DD HH:MM:SS
    std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", localTime);

    std::cout << "Current Time: " << timeStr << std::endl;

    return 0;
}
