//---------------------------------------------------------------------------//
/*!
 * \file Particle.hh
 */
//---------------------------------------------------------------------------//

#ifndef EXAMPM_PARTICLE_HH
#define EXAMPM_PARTICLE_HH

#include <vector>

namespace ExaMPM
{

//---------------------------------------------------------------------------//
/*!
 * \class Particle
 */
class Particle
{
  public:

    // Physical location
    std::vector<double> r;

    // Velocity
    std::vector<double> v;

    // Mass
    double m;

    // Material id
    int matid;

  public:

    // Default constructor.
    Particle() = default;

    // Spatial dimension constructor.
    Particle( const int space_dim )
        : r( space_dim )
        , v( space_dim )
    { /* ... */ }
};

//---------------------------------------------------------------------------//

} // end namespace ExaMPM

#endif // end EXAMPM_PARTICLE_HH

//---------------------------------------------------------------------------//
// end Particle.hh
//---------------------------------------------------------------------------//