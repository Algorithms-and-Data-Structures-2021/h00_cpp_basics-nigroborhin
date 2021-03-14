#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs != nullptr && rhs != nullptr) {
        int c = *lhs;
        *lhs = *rhs;
        *rhs = c;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows <= 0 || num_cols <= 0) {
        return nullptr;
    } else {
        int **massive = new int *[num_rows];
        for (int i = 0; i < num_rows; i++) {
            massive[i] = new int[num_cols];
        }
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                massive[i][j] = init_value;
            }
        }
        return massive;
    }
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source == nullptr || arr_2d_target == nullptr || num_cols < 0 || num_rows < 0) {
        return false;
    }
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int arri;
    for (int i = 0; i < arr.size() / 2; i++) {
        arri = arr.at(i);
        arr.at(i) = arr.at(arr.size() - i - 1);
        arr.at(arr.size() - i - 1) = arri;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    int arr_size = arr_end - arr_begin + 1;
    int c;
    if (!(arr_begin == nullptr || arr_end == nullptr)) {
        for (int i = 0; i < arr_size / 2; i++) {
            c = arr_begin[i];
            arr_begin[i] = arr_begin[arr_size - i - 1];
            arr_begin[arr_size - i - 1] = c;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr == nullptr || size < 0) {
        return nullptr;
    }
    int *max_el = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_el) {
            max_el = &arr[i];
        }
    }
    return max_el;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_numbers;
    if (!arr.empty()) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr.at(i) % 2 != 0) {
                odd_numbers.push_back(arr.at(i));
            }
        }
    }
    return odd_numbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_numbers;
    if (!(arr_a.empty() || arr_b.empty())) {
        for (int i = 0; i < arr_a.size(); i++) {
            for (int j = 0; j < arr_b.size(); j++) {
                if (arr_a.at(i) == arr_b.at(j)) {
                    common_numbers.push_back(arr_a.at(i));
                }
            }
        }
    }
    return common_numbers;
}
