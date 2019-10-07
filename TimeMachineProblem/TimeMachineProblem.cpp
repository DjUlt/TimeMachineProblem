#include "pch.h"
#include <iostream>
#include <vector>


int main()
{
    long input;

    std::cin >> input;

    std::vector<long> intsteps(input + 1);

    intsteps[1] = 0;

    for (int iter = 1; iter < input + 1; ++iter) {
        if (iter * 3 < input + 1) {
            if (intsteps[iter * 3] == NULL || intsteps[iter * 3] > intsteps[iter] + 1) {
                intsteps[iter * 3] = intsteps[iter] + 1;
            }
        }
        if (iter * 2 < input + 1) {
            if (intsteps[iter * 2] == NULL || intsteps[iter * 2] > intsteps[iter] + 1) {
                intsteps[iter * 2] = intsteps[iter] + 1;
            }
        }
        if (iter + 1 < input + 1) {
            if (intsteps[iter + 1] == NULL || intsteps[iter + 1] > intsteps[iter] + 1) {
                intsteps[iter + 1] = intsteps[iter] + 1;
            }
        }
    }

    std::cout << intsteps[input] << std::endl;

    std::vector<long> anwser;

    for (int iter = intsteps[input], count = input; iter > -1; --iter) {
        if (count % 3 == 0 && intsteps[count / 3] == iter - 1) {
            anwser.push_back(count);
            count /= 3;
        }
        else if (count % 2 == 0 && intsteps[count / 2] == iter - 1) {
            anwser.push_back(count);
            count /= 2;
        }
        else {
            anwser.push_back(count);
            count -= 1;
        }
    }

    for (int i = anwser.size() - 1; i > -1; --i) {
        std::cout << anwser[i] << " ";
    }
}
