cmake_minimum_required(VERSION 3.16)
project(SortingAlgorithmsUsingC C)

set(CMAKE_C_STANDARD 99)

add_executable(SortingAlgorithmsUsingC main.c InsertionSort.c MergeSort.c BubbleSort.c QuickSort.c)