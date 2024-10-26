#' Takes a Spatrast and gives back a matrix with the values of the Spatrast
#' @param tiff Takes a Spatrast



get_tiff_values <- function(tiff) {
    
    col <- ncol(tiff)
    row <- nrow(tiff)
    data <- matrix(values(tiff),col,row,byrow=TRUE)
    invisible(return(data))
    
}
