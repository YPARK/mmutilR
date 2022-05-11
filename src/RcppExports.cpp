// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_mmutil_pca
Rcpp::List rcpp_mmutil_pca(const std::string mtx_file, const std::size_t RANK, const bool TAKE_LN, const double TAU, const double COL_NORM, const std::size_t EM_ITER, const double EM_TOL, const std::size_t KNN_BILINK, const std::size_t KNN_NNLIST, const std::size_t LU_ITER, const std::string row_weight_file, const std::size_t NUM_THREADS, const std::size_t BLOCK_SIZE);
RcppExport SEXP _mmutilR_rcpp_mmutil_pca(SEXP mtx_fileSEXP, SEXP RANKSEXP, SEXP TAKE_LNSEXP, SEXP TAUSEXP, SEXP COL_NORMSEXP, SEXP EM_ITERSEXP, SEXP EM_TOLSEXP, SEXP KNN_BILINKSEXP, SEXP KNN_NNLISTSEXP, SEXP LU_ITERSEXP, SEXP row_weight_fileSEXP, SEXP NUM_THREADSSEXP, SEXP BLOCK_SIZESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type RANK(RANKSEXP);
    Rcpp::traits::input_parameter< const bool >::type TAKE_LN(TAKE_LNSEXP);
    Rcpp::traits::input_parameter< const double >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const double >::type COL_NORM(COL_NORMSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type EM_ITER(EM_ITERSEXP);
    Rcpp::traits::input_parameter< const double >::type EM_TOL(EM_TOLSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_BILINK(KNN_BILINKSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_NNLIST(KNN_NNLISTSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type LU_ITER(LU_ITERSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_weight_file(row_weight_fileSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type BLOCK_SIZE(BLOCK_SIZESEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_pca(mtx_file, RANK, TAKE_LN, TAU, COL_NORM, EM_ITER, EM_TOL, KNN_BILINK, KNN_NNLIST, LU_ITER, row_weight_file, NUM_THREADS, BLOCK_SIZE));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_bbknn_pca
Rcpp::List rcpp_mmutil_bbknn_pca(const std::string mtx_file, const Rcpp::StringVector& r_batches, const std::size_t knn, const std::size_t RANK, const bool TAKE_LN, const double TAU, const double COL_NORM, const std::size_t EM_ITER, const double EM_TOL, const std::size_t KNN_BILINK, const std::size_t KNN_NNLIST, const std::size_t LU_ITER, const std::string row_weight_file, const std::size_t NUM_THREADS, const std::size_t BLOCK_SIZE);
RcppExport SEXP _mmutilR_rcpp_mmutil_bbknn_pca(SEXP mtx_fileSEXP, SEXP r_batchesSEXP, SEXP knnSEXP, SEXP RANKSEXP, SEXP TAKE_LNSEXP, SEXP TAUSEXP, SEXP COL_NORMSEXP, SEXP EM_ITERSEXP, SEXP EM_TOLSEXP, SEXP KNN_BILINKSEXP, SEXP KNN_NNLISTSEXP, SEXP LU_ITERSEXP, SEXP row_weight_fileSEXP, SEXP NUM_THREADSSEXP, SEXP BLOCK_SIZESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type r_batches(r_batchesSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type knn(knnSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type RANK(RANKSEXP);
    Rcpp::traits::input_parameter< const bool >::type TAKE_LN(TAKE_LNSEXP);
    Rcpp::traits::input_parameter< const double >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const double >::type COL_NORM(COL_NORMSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type EM_ITER(EM_ITERSEXP);
    Rcpp::traits::input_parameter< const double >::type EM_TOL(EM_TOLSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_BILINK(KNN_BILINKSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_NNLIST(KNN_NNLISTSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type LU_ITER(LU_ITERSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_weight_file(row_weight_fileSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type BLOCK_SIZE(BLOCK_SIZESEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_bbknn_pca(mtx_file, r_batches, knn, RANK, TAKE_LN, TAU, COL_NORM, EM_ITER, EM_TOL, KNN_BILINK, KNN_NNLIST, LU_ITER, row_weight_file, NUM_THREADS, BLOCK_SIZE));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_annotate_columns
Rcpp::List rcpp_mmutil_annotate_columns(const Rcpp::List pos_labels, Rcpp::Nullable<Rcpp::StringVector> r_rows, Rcpp::Nullable<Rcpp::StringVector> r_cols, Rcpp::Nullable<Rcpp::List> r_neg_labels, Rcpp::Nullable<Rcpp::NumericVector> r_qc_labels, const std::string mtx_file, const std::string row_file, const std::string col_file, Rcpp::Nullable<Rcpp::NumericMatrix> r_U, Rcpp::Nullable<Rcpp::NumericMatrix> r_D, Rcpp::Nullable<Rcpp::NumericMatrix> r_V, const double KAPPA_MAX, const bool TAKE_LN, const std::size_t BATCH_SIZE, const std::size_t EM_ITER, const double EM_TOL, const bool VERBOSE, const bool DO_STD);
RcppExport SEXP _mmutilR_rcpp_mmutil_annotate_columns(SEXP pos_labelsSEXP, SEXP r_rowsSEXP, SEXP r_colsSEXP, SEXP r_neg_labelsSEXP, SEXP r_qc_labelsSEXP, SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP r_USEXP, SEXP r_DSEXP, SEXP r_VSEXP, SEXP KAPPA_MAXSEXP, SEXP TAKE_LNSEXP, SEXP BATCH_SIZESEXP, SEXP EM_ITERSEXP, SEXP EM_TOLSEXP, SEXP VERBOSESEXP, SEXP DO_STDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type pos_labels(pos_labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_rows(r_rowsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_cols(r_colsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type r_neg_labels(r_neg_labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type r_qc_labels(r_qc_labelsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_U(r_USEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_D(r_DSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_V(r_VSEXP);
    Rcpp::traits::input_parameter< const double >::type KAPPA_MAX(KAPPA_MAXSEXP);
    Rcpp::traits::input_parameter< const bool >::type TAKE_LN(TAKE_LNSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type BATCH_SIZE(BATCH_SIZESEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type EM_ITER(EM_ITERSEXP);
    Rcpp::traits::input_parameter< const double >::type EM_TOL(EM_TOLSEXP);
    Rcpp::traits::input_parameter< const bool >::type VERBOSE(VERBOSESEXP);
    Rcpp::traits::input_parameter< const bool >::type DO_STD(DO_STDSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_annotate_columns(pos_labels, r_rows, r_cols, r_neg_labels, r_qc_labels, mtx_file, row_file, col_file, r_U, r_D, r_V, KAPPA_MAX, TAKE_LN, BATCH_SIZE, EM_ITER, EM_TOL, VERBOSE, DO_STD));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_deconvolve_svd
Rcpp::List rcpp_mmutil_deconvolve_svd(const std::string mtx_file, const std::string row_file, const std::string col_file, Rcpp::Nullable<Rcpp::NumericMatrix> r_U, Rcpp::Nullable<Rcpp::NumericMatrix> r_D, Rcpp::Nullable<Rcpp::NumericMatrix> r_V, Rcpp::Nullable<Rcpp::StringVector> r_rows, Rcpp::Nullable<Rcpp::StringVector> r_cols, const bool TAKE_LN, const bool VERBOSE);
RcppExport SEXP _mmutilR_rcpp_mmutil_deconvolve_svd(SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP r_USEXP, SEXP r_DSEXP, SEXP r_VSEXP, SEXP r_rowsSEXP, SEXP r_colsSEXP, SEXP TAKE_LNSEXP, SEXP VERBOSESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_U(r_USEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_D(r_DSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_V(r_VSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_rows(r_rowsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_cols(r_colsSEXP);
    Rcpp::traits::input_parameter< const bool >::type TAKE_LN(TAKE_LNSEXP);
    Rcpp::traits::input_parameter< const bool >::type VERBOSE(VERBOSESEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_deconvolve_svd(mtx_file, row_file, col_file, r_U, r_D, r_V, r_rows, r_cols, TAKE_LN, VERBOSE));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_merge_file_sets
Rcpp::List rcpp_mmutil_merge_file_sets(Rcpp::Nullable<const Rcpp::StringVector> r_headers, Rcpp::Nullable<const Rcpp::StringVector> r_batches, Rcpp::Nullable<const Rcpp::StringVector> r_mtx_files, Rcpp::Nullable<const Rcpp::StringVector> r_row_files, Rcpp::Nullable<const Rcpp::StringVector> r_col_files, Rcpp::Nullable<const Rcpp::StringVector> r_fixed_rows, const std::string output, const double nnz_cutoff, const std::string delim);
RcppExport SEXP _mmutilR_rcpp_mmutil_merge_file_sets(SEXP r_headersSEXP, SEXP r_batchesSEXP, SEXP r_mtx_filesSEXP, SEXP r_row_filesSEXP, SEXP r_col_filesSEXP, SEXP r_fixed_rowsSEXP, SEXP outputSEXP, SEXP nnz_cutoffSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_headers(r_headersSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_batches(r_batchesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_mtx_files(r_mtx_filesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_row_files(r_row_filesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_col_files(r_col_filesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_fixed_rows(r_fixed_rowsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const double >::type nnz_cutoff(nnz_cutoffSEXP);
    Rcpp::traits::input_parameter< const std::string >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_merge_file_sets(r_headers, r_batches, r_mtx_files, r_row_files, r_col_files, r_fixed_rows, output, nnz_cutoff, delim));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_copy_selected_rows
Rcpp::List rcpp_mmutil_copy_selected_rows(const std::string mtx_file, const std::string row_file, const std::string col_file, const Rcpp::StringVector& r_selected, const std::string output);
RcppExport SEXP _mmutilR_rcpp_mmutil_copy_selected_rows(SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP r_selectedSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type r_selected(r_selectedSEXP);
    Rcpp::traits::input_parameter< const std::string >::type output(outputSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_copy_selected_rows(mtx_file, row_file, col_file, r_selected, output));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_copy_selected_columns
Rcpp::List rcpp_mmutil_copy_selected_columns(const std::string mtx_file, const std::string row_file, const std::string col_file, const Rcpp::StringVector& r_selected, const std::string output);
RcppExport SEXP _mmutilR_rcpp_mmutil_copy_selected_columns(SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP r_selectedSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type r_selected(r_selectedSEXP);
    Rcpp::traits::input_parameter< const std::string >::type output(outputSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_copy_selected_columns(mtx_file, row_file, col_file, r_selected, output));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_build_index
int rcpp_mmutil_build_index(const std::string mtx_file, const std::string index_file);
RcppExport SEXP _mmutilR_rcpp_mmutil_build_index(SEXP mtx_fileSEXP, SEXP index_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type index_file(index_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_build_index(mtx_file, index_file));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_read_index
Rcpp::NumericVector rcpp_mmutil_read_index(const std::string index_file);
RcppExport SEXP _mmutilR_rcpp_mmutil_read_index(SEXP index_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type index_file(index_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_read_index(index_file));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_check_index
int rcpp_mmutil_check_index(const std::string mtx_file, const Rcpp::NumericVector& index_tab);
RcppExport SEXP _mmutilR_rcpp_mmutil_check_index(SEXP mtx_fileSEXP, SEXP index_tabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type index_tab(index_tabSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_check_index(mtx_file, index_tab));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_info
Rcpp::List rcpp_mmutil_info(const std::string mtx_file);
RcppExport SEXP _mmutilR_rcpp_mmutil_info(SEXP mtx_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_info(mtx_file));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_write_mtx
int rcpp_mmutil_write_mtx(const Eigen::SparseMatrix<float, Eigen::ColMajor>& X, const std::string mtx_file);
RcppExport SEXP _mmutilR_rcpp_mmutil_write_mtx(SEXP XSEXP, SEXP mtx_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::SparseMatrix<float, Eigen::ColMajor>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_write_mtx(X, mtx_file));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_read_columns_sparse
Rcpp::List rcpp_mmutil_read_columns_sparse(const std::string mtx_file, const Rcpp::NumericVector& memory_location, const Rcpp::NumericVector& r_column_index, const bool verbose, const std::size_t NUM_THREADS, const std::size_t MIN_SIZE);
RcppExport SEXP _mmutilR_rcpp_mmutil_read_columns_sparse(SEXP mtx_fileSEXP, SEXP memory_locationSEXP, SEXP r_column_indexSEXP, SEXP verboseSEXP, SEXP NUM_THREADSSEXP, SEXP MIN_SIZESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type memory_location(memory_locationSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type r_column_index(r_column_indexSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type MIN_SIZE(MIN_SIZESEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_read_columns_sparse(mtx_file, memory_location, r_column_index, verbose, NUM_THREADS, MIN_SIZE));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_read_columns
Rcpp::NumericMatrix rcpp_mmutil_read_columns(const std::string mtx_file, const Rcpp::NumericVector& memory_location, const Rcpp::NumericVector& r_column_index, const bool verbose, const std::size_t NUM_THREADS, const std::size_t MIN_SIZE);
RcppExport SEXP _mmutilR_rcpp_mmutil_read_columns(SEXP mtx_fileSEXP, SEXP memory_locationSEXP, SEXP r_column_indexSEXP, SEXP verboseSEXP, SEXP NUM_THREADSSEXP, SEXP MIN_SIZESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type memory_location(memory_locationSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type r_column_index(r_column_indexSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type MIN_SIZE(MIN_SIZESEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_read_columns(mtx_file, memory_location, r_column_index, verbose, NUM_THREADS, MIN_SIZE));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_match_files
Rcpp::List rcpp_mmutil_match_files(const std::string src_mtx, const std::string tgt_mtx, const std::size_t knn, const std::size_t RANK, const bool TAKE_LN, const double TAU, const double COL_NORM, const std::size_t EM_ITER, const double EM_TOL, const std::size_t LU_ITER, const std::size_t KNN_BILINK, const std::size_t KNN_NNLIST, const std::string row_weight_file, const std::size_t NUM_THREADS, const std::size_t BLOCK_SIZE);
RcppExport SEXP _mmutilR_rcpp_mmutil_match_files(SEXP src_mtxSEXP, SEXP tgt_mtxSEXP, SEXP knnSEXP, SEXP RANKSEXP, SEXP TAKE_LNSEXP, SEXP TAUSEXP, SEXP COL_NORMSEXP, SEXP EM_ITERSEXP, SEXP EM_TOLSEXP, SEXP LU_ITERSEXP, SEXP KNN_BILINKSEXP, SEXP KNN_NNLISTSEXP, SEXP row_weight_fileSEXP, SEXP NUM_THREADSSEXP, SEXP BLOCK_SIZESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type src_mtx(src_mtxSEXP);
    Rcpp::traits::input_parameter< const std::string >::type tgt_mtx(tgt_mtxSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type knn(knnSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type RANK(RANKSEXP);
    Rcpp::traits::input_parameter< const bool >::type TAKE_LN(TAKE_LNSEXP);
    Rcpp::traits::input_parameter< const double >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const double >::type COL_NORM(COL_NORMSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type EM_ITER(EM_ITERSEXP);
    Rcpp::traits::input_parameter< const double >::type EM_TOL(EM_TOLSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type LU_ITER(LU_ITERSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_BILINK(KNN_BILINKSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_NNLIST(KNN_NNLISTSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_weight_file(row_weight_fileSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type BLOCK_SIZE(BLOCK_SIZESEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_match_files(src_mtx, tgt_mtx, knn, RANK, TAKE_LN, TAU, COL_NORM, EM_ITER, EM_TOL, LU_ITER, KNN_BILINK, KNN_NNLIST, row_weight_file, NUM_THREADS, BLOCK_SIZE));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_network_edge_cluster
Rcpp::List rcpp_mmutil_network_edge_cluster(const std::string mtx_file, const std::string row_file, const std::string col_file, const std::string output, const std::size_t num_clust, const std::size_t num_gibbs, const std::size_t num_burnin, const std::size_t nnz_cutoff, const float A0, const float B0, const float Dir0, const bool verbose);
RcppExport SEXP _mmutilR_rcpp_mmutil_network_edge_cluster(SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP outputSEXP, SEXP num_clustSEXP, SEXP num_gibbsSEXP, SEXP num_burninSEXP, SEXP nnz_cutoffSEXP, SEXP A0SEXP, SEXP B0SEXP, SEXP Dir0SEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type num_clust(num_clustSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type num_gibbs(num_gibbsSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type num_burnin(num_burninSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type nnz_cutoff(nnz_cutoffSEXP);
    Rcpp::traits::input_parameter< const float >::type A0(A0SEXP);
    Rcpp::traits::input_parameter< const float >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< const float >::type Dir0(Dir0SEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_network_edge_cluster(mtx_file, row_file, col_file, output, num_clust, num_gibbs, num_burnin, nnz_cutoff, A0, B0, Dir0, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_network_topic_data
Rcpp::List rcpp_mmutil_network_topic_data(const std::string mtx_file, const std::size_t knn, const std::string output, const float CUTOFF, const bool WEIGHTED, const float MAXW, const std::string col_file, const std::string row_file, Rcpp::Nullable<const Rcpp::StringVector> r_batches, Rcpp::Nullable<const Rcpp::NumericMatrix> r_U, Rcpp::Nullable<const Rcpp::NumericMatrix> r_D, Rcpp::Nullable<const Rcpp::NumericMatrix> r_V, const std::size_t RANK, const bool TAKE_LN, const double TAU, const double COL_NORM, const std::size_t EM_ITER, const double EM_TOL, const std::size_t KNN_BILINK, const std::size_t KNN_NNLIST, const std::size_t LU_ITER, const std::string row_weight_file, const std::size_t NUM_THREADS);
RcppExport SEXP _mmutilR_rcpp_mmutil_network_topic_data(SEXP mtx_fileSEXP, SEXP knnSEXP, SEXP outputSEXP, SEXP CUTOFFSEXP, SEXP WEIGHTEDSEXP, SEXP MAXWSEXP, SEXP col_fileSEXP, SEXP row_fileSEXP, SEXP r_batchesSEXP, SEXP r_USEXP, SEXP r_DSEXP, SEXP r_VSEXP, SEXP RANKSEXP, SEXP TAKE_LNSEXP, SEXP TAUSEXP, SEXP COL_NORMSEXP, SEXP EM_ITERSEXP, SEXP EM_TOLSEXP, SEXP KNN_BILINKSEXP, SEXP KNN_NNLISTSEXP, SEXP LU_ITERSEXP, SEXP row_weight_fileSEXP, SEXP NUM_THREADSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type knn(knnSEXP);
    Rcpp::traits::input_parameter< const std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const float >::type CUTOFF(CUTOFFSEXP);
    Rcpp::traits::input_parameter< const bool >::type WEIGHTED(WEIGHTEDSEXP);
    Rcpp::traits::input_parameter< const float >::type MAXW(MAXWSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::StringVector> >::type r_batches(r_batchesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::NumericMatrix> >::type r_U(r_USEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::NumericMatrix> >::type r_D(r_DSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const Rcpp::NumericMatrix> >::type r_V(r_VSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type RANK(RANKSEXP);
    Rcpp::traits::input_parameter< const bool >::type TAKE_LN(TAKE_LNSEXP);
    Rcpp::traits::input_parameter< const double >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< const double >::type COL_NORM(COL_NORMSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type EM_ITER(EM_ITERSEXP);
    Rcpp::traits::input_parameter< const double >::type EM_TOL(EM_TOLSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_BILINK(KNN_BILINKSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_NNLIST(KNN_NNLISTSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type LU_ITER(LU_ITERSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_weight_file(row_weight_fileSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_network_topic_data(mtx_file, knn, output, CUTOFF, WEIGHTED, MAXW, col_file, row_file, r_batches, r_U, r_D, r_V, RANK, TAKE_LN, TAU, COL_NORM, EM_ITER, EM_TOL, KNN_BILINK, KNN_NNLIST, LU_ITER, row_weight_file, NUM_THREADS));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_aggregate
Rcpp::List rcpp_mmutil_aggregate(const std::string mtx_file, const std::string row_file, const std::string col_file, Rcpp::Nullable<Rcpp::StringVector> r_cols, Rcpp::Nullable<Rcpp::StringVector> r_indv, Rcpp::Nullable<Rcpp::StringVector> r_annot, Rcpp::Nullable<Rcpp::NumericMatrix> r_annot_mat, Rcpp::Nullable<Rcpp::StringVector> r_lab_name, Rcpp::Nullable<Rcpp::StringVector> r_trt, Rcpp::Nullable<Rcpp::NumericMatrix> r_V, const double a0, const double b0, const double eps, const std::size_t knn, const std::size_t KNN_BILINK, const std::size_t KNN_NNLIST, const std::size_t NUM_THREADS, const bool IMPUTE_BY_KNN);
RcppExport SEXP _mmutilR_rcpp_mmutil_aggregate(SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP r_colsSEXP, SEXP r_indvSEXP, SEXP r_annotSEXP, SEXP r_annot_matSEXP, SEXP r_lab_nameSEXP, SEXP r_trtSEXP, SEXP r_VSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP epsSEXP, SEXP knnSEXP, SEXP KNN_BILINKSEXP, SEXP KNN_NNLISTSEXP, SEXP NUM_THREADSSEXP, SEXP IMPUTE_BY_KNNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_cols(r_colsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_indv(r_indvSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_annot(r_annotSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_annot_mat(r_annot_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_lab_name(r_lab_nameSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_trt(r_trtSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type r_V(r_VSEXP);
    Rcpp::traits::input_parameter< const double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type knn(knnSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_BILINK(KNN_BILINKSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type KNN_NNLIST(KNN_NNLISTSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    Rcpp::traits::input_parameter< const bool >::type IMPUTE_BY_KNN(IMPUTE_BY_KNNSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_aggregate(mtx_file, row_file, col_file, r_cols, r_indv, r_annot, r_annot_mat, r_lab_name, r_trt, r_V, a0, b0, eps, knn, KNN_BILINK, KNN_NNLIST, NUM_THREADS, IMPUTE_BY_KNN));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_compute_scores
Rcpp::List rcpp_mmutil_compute_scores(const std::string mtx_file, Rcpp::Nullable<const std::string> row_file, Rcpp::Nullable<const std::string> col_file);
RcppExport SEXP _mmutilR_rcpp_mmutil_compute_scores(SEXP mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mtx_file(mtx_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const std::string> >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<const std::string> >::type col_file(col_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_compute_scores(mtx_file, row_file, col_file));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_simulate_poisson
Rcpp::List rcpp_mmutil_simulate_poisson(const Eigen::MatrixXf mu, const Eigen::VectorXf rho, const std::string output, Rcpp::Nullable<Rcpp::IntegerVector> r_indv);
RcppExport SEXP _mmutilR_rcpp_mmutil_simulate_poisson(SEXP muSEXP, SEXP rhoSEXP, SEXP outputSEXP, SEXP r_indvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXf >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXf >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type r_indv(r_indvSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_simulate_poisson(mu, rho, output, r_indv));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mmutil_aggregate_velocity
Rcpp::List rcpp_mmutil_aggregate_velocity(const std::string spliced_mtx_file, const std::string unspliced_mtx_file, const std::string row_file, const std::string col_file, Rcpp::Nullable<Rcpp::StringVector> r_cols, Rcpp::Nullable<Rcpp::StringVector> r_indv, Rcpp::Nullable<Rcpp::StringVector> r_annot, Rcpp::Nullable<Rcpp::StringVector> r_lab_name, const float a0, const float b0, const std::size_t MAX_ITER, const float TOL, const std::size_t NUM_THREADS);
RcppExport SEXP _mmutilR_rcpp_mmutil_aggregate_velocity(SEXP spliced_mtx_fileSEXP, SEXP unspliced_mtx_fileSEXP, SEXP row_fileSEXP, SEXP col_fileSEXP, SEXP r_colsSEXP, SEXP r_indvSEXP, SEXP r_annotSEXP, SEXP r_lab_nameSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP MAX_ITERSEXP, SEXP TOLSEXP, SEXP NUM_THREADSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type spliced_mtx_file(spliced_mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type unspliced_mtx_file(unspliced_mtx_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type row_file(row_fileSEXP);
    Rcpp::traits::input_parameter< const std::string >::type col_file(col_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_cols(r_colsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_indv(r_indvSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_annot(r_annotSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type r_lab_name(r_lab_nameSEXP);
    Rcpp::traits::input_parameter< const float >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const float >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type MAX_ITER(MAX_ITERSEXP);
    Rcpp::traits::input_parameter< const float >::type TOL(TOLSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type NUM_THREADS(NUM_THREADSSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mmutil_aggregate_velocity(spliced_mtx_file, unspliced_mtx_file, row_file, col_file, r_cols, r_indv, r_annot, r_lab_name, a0, b0, MAX_ITER, TOL, NUM_THREADS));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mmutilR_rcpp_mmutil_pca", (DL_FUNC) &_mmutilR_rcpp_mmutil_pca, 13},
    {"_mmutilR_rcpp_mmutil_bbknn_pca", (DL_FUNC) &_mmutilR_rcpp_mmutil_bbknn_pca, 15},
    {"_mmutilR_rcpp_mmutil_annotate_columns", (DL_FUNC) &_mmutilR_rcpp_mmutil_annotate_columns, 18},
    {"_mmutilR_rcpp_mmutil_deconvolve_svd", (DL_FUNC) &_mmutilR_rcpp_mmutil_deconvolve_svd, 10},
    {"_mmutilR_rcpp_mmutil_merge_file_sets", (DL_FUNC) &_mmutilR_rcpp_mmutil_merge_file_sets, 9},
    {"_mmutilR_rcpp_mmutil_copy_selected_rows", (DL_FUNC) &_mmutilR_rcpp_mmutil_copy_selected_rows, 5},
    {"_mmutilR_rcpp_mmutil_copy_selected_columns", (DL_FUNC) &_mmutilR_rcpp_mmutil_copy_selected_columns, 5},
    {"_mmutilR_rcpp_mmutil_build_index", (DL_FUNC) &_mmutilR_rcpp_mmutil_build_index, 2},
    {"_mmutilR_rcpp_mmutil_read_index", (DL_FUNC) &_mmutilR_rcpp_mmutil_read_index, 1},
    {"_mmutilR_rcpp_mmutil_check_index", (DL_FUNC) &_mmutilR_rcpp_mmutil_check_index, 2},
    {"_mmutilR_rcpp_mmutil_info", (DL_FUNC) &_mmutilR_rcpp_mmutil_info, 1},
    {"_mmutilR_rcpp_mmutil_write_mtx", (DL_FUNC) &_mmutilR_rcpp_mmutil_write_mtx, 2},
    {"_mmutilR_rcpp_mmutil_read_columns_sparse", (DL_FUNC) &_mmutilR_rcpp_mmutil_read_columns_sparse, 6},
    {"_mmutilR_rcpp_mmutil_read_columns", (DL_FUNC) &_mmutilR_rcpp_mmutil_read_columns, 6},
    {"_mmutilR_rcpp_mmutil_match_files", (DL_FUNC) &_mmutilR_rcpp_mmutil_match_files, 15},
    {"_mmutilR_rcpp_mmutil_network_edge_cluster", (DL_FUNC) &_mmutilR_rcpp_mmutil_network_edge_cluster, 12},
    {"_mmutilR_rcpp_mmutil_network_topic_data", (DL_FUNC) &_mmutilR_rcpp_mmutil_network_topic_data, 23},
    {"_mmutilR_rcpp_mmutil_aggregate", (DL_FUNC) &_mmutilR_rcpp_mmutil_aggregate, 18},
    {"_mmutilR_rcpp_mmutil_compute_scores", (DL_FUNC) &_mmutilR_rcpp_mmutil_compute_scores, 3},
    {"_mmutilR_rcpp_mmutil_simulate_poisson", (DL_FUNC) &_mmutilR_rcpp_mmutil_simulate_poisson, 4},
    {"_mmutilR_rcpp_mmutil_aggregate_velocity", (DL_FUNC) &_mmutilR_rcpp_mmutil_aggregate_velocity, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_mmutilR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
