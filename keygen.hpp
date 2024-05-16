#pragma once

namespace keygen {
    /// <summary>Generates a checksum for a number <c>x</c></summary>
    /// <param name="x">Positive integer for which the checksum will be generated</param>
    /// <returns>Checksum. In case of an invalid parameter <c>x</c> returns -1</returns>
    int generateControlSum(int x) {
        if (x > 0) {
            unsigned int control_sum = 0;
            while (x > 0) {
                control_sum += x & 1;
                x >>= 1;
            }
            return control_sum;
        }
        return -1;
    }

    /// <summary>Calculates the next key value based on the input number <c>x</c> by adding a checksum to it</summary>
    /// <param name="x">Positive integer for which the checksum will be generated</param>
    /// <returns>Activation key. In case of invalid parameter <c>x</c> returns -1</returns>
    inline int nextKey(const int& x) {
        return (x > 0) ? x + keygen::generateControlSum(x) : -1;
    }
};