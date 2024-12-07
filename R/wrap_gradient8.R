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

wrap_gradient8 <- function(dem,use_mp=0) {
    
    d <- get_grid_data(dem) # Extract input data
    output <- single(length(d$z)) #create output array
    result <- .C("wrap_gradient8",outputR=as.single(output),as.single(d$z),as.single(d$cellsize),as.integer(use_mp), as.integer(d$dims))$outputR

    G <- dem # copy Spatrast
    values(G) <- result #update Spatrast values
    
    return(G)
}
