#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);  // Using vector instead of raw array

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    std::cout << max_so_far << std::endl;

    return 0;
}