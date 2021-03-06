#' @name BactDating
#' @title BactDating: Bayesian inference of ancestral dates on bacterial phylogenetic trees
#'
#' @description BactDating is a R package to perform Bayesian inference of ancestral dates on bacterial phylogenetic trees.
#'
#' The main functions of the package are:
#' \itemize{
#'
#' \item initRoot to initiate the root of an unrooted tree in a way that maximises the correlation between sampling dates and root-to-tip distances.
#' \item roottotip to perform a linear regression analysis between sampling dates and root-to-tip distances.
#' \item bactdate to perform Bayesian inference of ancestral dates on a phylogenetic tree.
#' }
#'
#' @author Xavier Didelot \email{xavier.didelot@gmail.com}
#'
#' @references Didelot et al (2018). Bayesian inference of ancestral dates on bacterial phylogenetic trees. Nucleic Acids Research, 46:e134.
#' @seealso https://github.com/xavierdidelot/BactDating

#' @useDynLib BactDating
#' @import stats
#' @import graphics
#' @import ape
NULL
