#include "mmutil_velocity.hh"

namespace mmutil { namespace velocity {

////////////////////////////////////////
// implementation for the data loader //
////////////////////////////////////////

int
data_loader_t::read(const Index j)
{
    using namespace mmutil::bgzf;

    target_col = j;

    spliced_reader.data.setZero();
    unspliced_reader.data.setZero();

    set_mem_loc(spliced_idx_tab);
    CHK_ERR_RET(visit_bgzf_block(spliced_file, lb, ub, spliced_reader),
                "unable to read spliced mtx file [" << j << "]");

    set_mem_loc(unspliced_idx_tab);
    CHK_ERR_RET(visit_bgzf_block(unspliced_file, lb, ub, unspliced_reader),
                "unable to read unspliced mtx file [" << j << "]");

    return EXIT_SUCCESS;
}

const Mat &
data_loader_t::spliced() const
{
    return spliced_reader.data;
}
const Mat &
data_loader_t::unspliced() const
{
    return unspliced_reader.data;
}

void
data_loader_t::set_mem_loc(const std::vector<Index> &_idx_tab)
{
    lb = _idx_tab[target_col];
    ub = 0;
    if ((target_col + 1) < _idx_tab.size())
        ub = _idx_tab[target_col + 1];
};

/////////////////////////////////////////////
// implementations for the aggregated stat //
/////////////////////////////////////////////

Index
aggregated_delta_model_t::nsample() const
{
    return n;
}

Mat
aggregated_delta_model_t::get_delta() const
{
    return delta;
}

Mat
aggregated_delta_model_t::get_sd_delta() const
{
    return UC.binaryExpr(PhiC, rate_sd_op);
}

Mat
aggregated_delta_model_t::get_ln_delta() const
{
    return UC.binaryExpr(PhiC, rate_ln_op);
}

Mat
aggregated_delta_model_t::get_sd_ln_delta() const
{
    return UC.unaryExpr(rate_sd_ln_op);
}

void
aggregated_delta_model_t::update_delta_stat()
{
    delta_old = delta;
    delta = UC.binaryExpr(PhiC, update_delta_op);
}

Scalar
aggregated_delta_model_t::update_diff()
{
    Scalar denom = delta_old.unaryExpr(log1p_op).unaryExpr(abs_op).mean();
    Scalar diff = (delta_old.unaryExpr(log1p_op) - delta.unaryExpr(log1p_op))
                      .unaryExpr(abs_op)
                      .mean();
    return diff / (denom + 1e-8);
}

}} // namespace mmutil::velocity
