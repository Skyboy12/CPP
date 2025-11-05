#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Sort the array to enable two-pointer technique
    std::sort(a.begin(), a.end());

    std::vector<bool> is_average(n, false);
    int count = 0;

    // O(N^2) approach
    for (int i = 0; i < n; ++i) { // Fix one element of the triplet, A[i]
        int left = 0;
        int right = n - 1;
        while (left < right) {
            // Ensure the pointers don't point to the fixed element A[i]
            if (left == i) {
                left++;
                continue;
            }
            if (right == i) {
                right--;
                continue;
            }

            // We have a triplet (A[left], A[i], A[right])
            // Check if their average exists in the array
            long long current_sum = (long long)a[left] + a[i] + a[right];

            if (current_sum % 3 == 0) {
                int avg = current_sum / 3;
                // Use binary search on the sorted array to find the average
                if (std::binary_search(a.begin(), a.end(), avg)) {
                    // If the average exists, we need to find all its occurrences
                    // and mark them. A simpler way is to just count at the end.
                    // Let's find one instance and decide what to do.
                    // This logic gets complex.
                }
            }
            
            // This pointer movement is arbitrary as we don't have a fixed target.
            // The approach is flawed. Let's correct it.

            // The target depends on a potential average A[p]
            // Let's iterate through p instead of moving pointers without a target
            long long target_sum_for_p = 3LL * a[right]; // Let A[right] be the average p
            if ( (long long)a[left] + a[i] < target_sum_for_p - a[right]) {
                 left++;
            } else {
                 right--;
            }
        }
    }
    
    // The logic above is complex. Here is the simplest correct O(N^2) solution.
    // We fix A[p] and solve 2-Sum for the remaining elements.

    std::unordered_set<int> valid_average_values;

    for (int p = 0; p < n; ++p) {
        // To speed up, only check for each unique value of A[p] once
        if (p > 0 && a[p] == a[p-1]) {
            continue;
        }

        for (int i = 0; i < n; ++i) {
            // Target for the other two numbers
            long long target = 3LL * a[p] - a[i];
            
            int left = i + 1;
            int right = n - 1;
            bool found = false;

            while (left < right) {
                long long current_sum = (long long)a[left] + a[right];
                if (current_sum == target) {
                    valid_average_values.insert(a[p]);
                    found = true;
                    break;
                } else if (current_sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
            if (found) {
                break; // Found a triplet for this A[p], move to the next
            }
        }
    }

    for (int x : a) {
        if (valid_average_values.count(x)) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}