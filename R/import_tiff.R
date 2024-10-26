#' Wrapper funktion to import a tiff (might be bloat and should be deleted)
#' @param path Takes a string with the path to a tiff file
#' @importFrom terra rast

import_tiff <- function(path) {
    return(rast(path))
}
