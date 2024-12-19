#' wrap_fillsink
#'
#' This will make the fillsinks funktion available to R from the libtotopotoolbox subdirectory
#' 
#' @param tiff Takes a Spatrast as input 
#'
#' @return An array
#' @export

wrap_fillsink <- function(dem,bc) {
    
    
    d <- get_grid_data(dem) # Extract input data
    output <- single(length(d$z)) #create output array
    result <- .C("wrap_fillsink",outputR=as.single(output),as.single(d$z),as.single(bc),as.integer(d$dims))$outputR
    
    return(result)
}
