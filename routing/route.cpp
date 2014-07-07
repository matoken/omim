#include "route.hpp"

namespace routing
{

Route::Route(string const & router, vector<m2::PointD> const & points, string const & name)
  : m_router(router), m_poly(points), m_name(name)
{
}

} // namespace routing
