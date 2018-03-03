cmake_minimum_required(VERSION 3.8)
project(C_programming)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        a/main.c
        abc/main.c
        Ass-1/Factorial/main.c
        Ass-1/Fibo_func/main.c
        Ass-1/Matrix_add/main.c
        Ass-1/Matrix_Determinant/main.c
        Ass-1/Matrix_mult/main.c
        Ass-1/Maximum_number/main.c
        Ass-1/Sparse_matrix/main.c
        Ass-1/Swap_without/main.c
        Ass-1/Tranpose_of_matrix/main.c
        Ass-2/Lagrange's_interpolation/main.c
        Ass-2/Newton's_forward_interpolation/main.c
        Ass-2/Newtons_Backward/main.c
        Ass-3/Simpson's_one_third_rule/main.c
        Ass-3/Trapezoidal_rule/main.c
        Ass-3/Weddle's_Rule/main.c
        Ass-5/Bisection_Method/main.c
        Ass-5/Newton_Raphson_method/main.c
        Ass-5/Regula_Falsi_method/main.c
        basic/main.c
        dfgfdgfd/main.c
        fac/main.c
        Fibo/main.c
        Gauss_Seidel/main.c
        knapsack/main.c
        macro_defining/main.c
        matrix_sorting/main.c
        merge2/main.c
        MergeSort/main.c
        My_first_program/main.c
        sss/main.c
        times/main.cpp
        tree/main.c)

add_executable(C_programming ${SOURCE_FILES})