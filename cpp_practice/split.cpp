#include <iostream>
#include <vector>
#include <cstdlib> // For std::strtol
#include <cstdint> // For uint8_t

std::vector<uint8_t> splitAndConvertToUint8(const char* s, char delimiter) {
    std::vector<uint8_t> result;
    const char* start = s; // Pointer to the start of each token
    const char* end = nullptr;

    while ((end = strchr(start, delimiter)) != nullptr) {
        // Extract substring between 'start' and 'end'
        std::string token(start, end - start);

        // Convert token to uint8_t
        uint8_t value = static_cast<uint8_t>(std::strtol(token.c_str(), nullptr, 10));
        result.push_back(value);

        // Move start to the next character after the delimiter
        start = end + 1;
    }

    // Handle the last token (or only token if no delimiters exist)
    if (*start != '\0') {
        uint8_t value = static_cast<uint8_t>(std::strtol(start, nullptr, 10));
        result.push_back(value);
    }

    return result;
}
