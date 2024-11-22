#' wrap_fillsink
#'
#' This will make the fillsinks funktion available to R from the libtotopotoolbox subdirectory
#' 
#' @param tiff Takes a Spatrast as input 
#'
#' @return An array
#' @export

wrap_fillsink <- function(tiff) {
    
    dims <- dim(tiff)
    # check if output and dem are the same size
    condition <- (length(output)!=length(dem))
    if (condition[1]){
        stop("output and dem are not the same length or dimension")
    }
    result <- .C("wrap_fillsink",outputR=as.single(matrix(0,dims[1],dims[2])),as.single(values(tiff)),as.integer(dims))$outputR
    
    return(result)
}
