% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/EuclideanDT_inC.R
\name{EuclideanDT_inC}
\alias{EuclideanDT_inC}
\title{EuclideanDT_inC}
\usage{
EuclideanDT_inC(binary_image)
}
\arguments{
\item{binary_image}{A matrix with Zeros and Ones}
}
\value{
A integer matrix
}
\description{
This function cals a C function that calculates the Euclidean Distance Transformation in two scans for a given binary image, consisting of Zero and Ones, where the Algorithm replaces the One tiles with the euclidean distance to the nearist Zero. The function referes to the paper "Fast Euclidean distance transformation
in two scans using a 3 3 neighborhood" by Frank Y. Shih* and Yi-Ta Wu
}
\examples{
EuclideanDT_inC(matrix(c(0,0,0,0,0,
    0,1,1,1,0,
    0,1,1,1,0,
    0,1,1,1,0,
    0,0,0,0,0,
    0,0,0,0,0),6,5,byrow=TRUE))

}
