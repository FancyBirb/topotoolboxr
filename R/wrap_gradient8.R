#' wrap_gradient8
#'
#' This will make the Gradient8 funktion available to R from the libtotopotoolbox subdirectory
#' 
#' @param output A matrix where the output will be saved
#' @param dem A matrix/vector that contains the hight data
#' @param cellsize I dont know how to describe this one
#' @param use_mp Future feature that will allow to parallelize the code
#' @param dims Contains an array of the dem dimensions
#' @examples
#' input<-c(0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0)
#' output<-c(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
#' wrap_gradient8(output,input,1,0,c(5,5))
#'
#' @return An array
#' @export

wrap_gradient8 <- function(output,dem,cellsize,use_mp,dims) {
    
    # check if output and dem are the same size
    condition <- (length(output)!=length(dem))
    if (condition[1]){
        stop("output and dem are not the same length or dimension")
    }
    result <- .C("wrap_gradient8",outputR=as.single(output),as.single(dem),as.single(cellsize),as.integer(use_mp), as.integer(dims))$outputR
    
    return(result)
}
