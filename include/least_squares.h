/// @file least_squares.h
/// Compute a least squares regression

#ifndef LEAST_SQUARES_H
#define LEAST_SQUARES_H

/// @brief x, y datapoints for least squares regression
/// @param x The actual values
/// @param y The output values
/// @param n The number of data points
typedef struct {
    /// The input values
    double *x;
    /// The output values
    double *y;
    /// The number of data points
    int n;
} Dataset;

/// @brief  Read in some parameter data to the Dataset struct
/// @param filename Path to the file to read
/// @return A populated Dataset with our data points
Dataset read_data(const char *filename);
/// @brief Read in data from the Dataset and find a line the minimises the least-squares distance to the data
/// @param data Pointer to the input data
/// @param slope Pointer to the slope of the best fit line
/// @param intercept Pointer to the y-intercept of the best fit line
void solve_least_squares(const Dataset *data, double *slope, double *intercept);
/// @brief Prints the equation of the best fit line
/// @param slope The slope of the best fit line
/// @param intercept The y-intercept of the best fit line
void print_solution(double slope, double intercept);

#endif // LEAST_SQUARES_H
