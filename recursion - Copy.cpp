#include <iostream>
#include <vector>

void findSequences(int k, int targetSum, std::vector<int>& currentSequence, int start, int n) {
    if (targetSum == 0 && currentSequence.size() == n) {
        // Print the current sequence
        for (int num : currentSequence) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = start; i <= 6 && i <= k && i <= targetSum; ++i) {
        currentSequence.push_back(i);
        findSequences(k, targetSum - i, currentSequence, i, n);
        currentSequence.pop_back();
    }
}

void printSequences(int k, int targetSum, int n) {
    std::vector<int> currentSequence;
    findSequences(k, targetSum, currentSequence, 1, n);
}

int main() {
    int k_value = 5;
    int target_sum_value = 10;
    int n_value = 3; // Set the value for n

    std::cout << "One valid sequence of length " << n_value << " for k = " << k_value
              << " and target sum = " << target_sum_value << ":\n";
    printSequences(k_value, target_sum_value, n_value);

    return 0;
}
