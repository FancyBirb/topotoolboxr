#' wrap_gradient8
#'
#' This will make the Gradient8 funktion available to R from the libtotopotoolbox subdirectory
#'
#' @export

wrap_gradient8 <- function(output,dem,cellsize,use_mp,dims) {
    result <- .C(C_wrap_gradient8,as.single(output),as.single(dem),as.integer(cellsize),as.integer(use_mp),as.single(dims))
    return(result[[1]][1])
}
