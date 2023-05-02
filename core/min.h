//
// Created by disks on 5/1/2023.
//

#ifndef CS_MIN_H
#define CS_MIN_H
namespace cs {
    namespace core {
        inline size_t min(size_t a, size_t b) {
            return a > b ? b : a;
        }

        inline size_t min(short a, short b) {
            return a > b ? b : a;
        }

        inline size_t min(int a, int b) {
            return a > b ? b : a;
        }

        inline size_t min(long a, long b) {
            return a > b ? b : a;
        }

        inline size_t min(float a, float b) {
            return a > b ? b : a;
        }

        inline size_t min(double a, double b) {
            return a > b ? b : a;
        }
    } // cs
} // core

#endif //CS_MIN_H
