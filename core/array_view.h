//
// Created by disks on 5/1/2023.
//

#ifndef CS_ARRAY_VIEW_H
#define CS_ARRAY_VIEW_H

#include "min.h"

namespace cs {
    namespace core {
        template<class T>
        class array_view {
        private:
        public:
            T *mPointer;
            size_t mLength;

            array_view()
                    : mPointer(nullptr), mLength(0) {

            }

            array_view(T *pointer, size_t length)
                    : mPointer(pointer), mLength(length) {

            }

            T *get_pointer() {
                return mPointer;
            }

            size_t get_length() {
                return mLength;
            }

            bool operator==(const array_view &obj) const {
                if (mLength != obj.mLength) {
                    return false;
                }

                //TODO: add specialization for primitive types.

                for (int i = 0; i < mLength; ++i) {
                    if (mPointer[i] != obj.mPointer[i]) {
                        return false;
                    }
                }
                return true;
            }

            bool operator!=(const array_view &obj) const {
                if (mLength != obj.mLength) {
                    return true;
                }

                //TODO: add specialization for primitive types.

                for (int i = 0; i < mLength; ++i) {
                    if (mPointer[i] != obj.mPointer[i]) {
                        return true;
                    }
                }
                return false;
            }

        };

    } // cs
} // core

#endif //CS_ARRAY_VIEW_H
