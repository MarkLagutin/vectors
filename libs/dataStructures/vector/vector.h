//
// Created by zxc marik on 08.04.2023.
//

#ifndef LABA14_VECTOR_H
#define LABA14_VECTOR_H
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct vector {
    int *data;        // указатель на элементы вектора
    size_t size;      // размер вектора
    size_t capacity;  // вместимость вектора
} vector;

vector createVector(const size_t n);
void reserve(vector *v, const size_t newCapacity);
void clear(vector *v);
void deleteVector(vector *v);

#endif //LABA14_VECTOR_H
