//---------------------------------------------------------------------------//
/*!
 * \file Square.hh
 */
//---------------------------------------------------------------------------//

#ifndef EXAMPM_SQUARE_HH
#define EXAMPM_SQUARE_HH

#include "Geometry.hh"
#include "Particle.hh"

#include <vector>

namespace ExaMPM
{
//---------------------------------------------------------------------------//
/*!
 * \class Square
 */
class Square : public Geometry
{
  public:

    // Type aliases.
    using Base = Geometry;
    using VelocityField = typename Base::VelocityField;

    // Constructor. Bounds give (-x,+x,-y,+y).
    Square( const std::vector<double>& bounds );

    // Set the initial material id of the geometry.
    void setMatId( const int matid ) override;

    // Set the initial velocity field of the geometry.
    void setVelocityField( VelocityField&& velocity_field ) override ;

    // Set the initial total mass of the geometry.
    void setMass( const double total_mass ) override;

    // Set the initial total mass of the geometry.
    double getMass() const override;

    // Determine if a particle is in the geometry. If it is, keep track of it
    // so we know how many total particles there are.
    bool particleInGeometry( const Particle& p ) override;

    // Initialize the state of a particle in the geometry. This will be called
    // after we have counted how many particles are in the geometry with
    // particleInGeometry(). The given particle will be in the geometry.
    void initializeParticle( Particle& p ) const override;

  private:

    // Bounds.
    std::vector<double> d_bounds;

    // Material id.
    int d_matid;

    // Velocity field.
    VelocityField d_velocity_field;

    // Total geometry mass.
    double d_total_mass;
};

//---------------------------------------------------------------------------//

} // end namespace ExaMPM

#endif // end EXAMPM_SQUARE_HH

//---------------------------------------------------------------------------//
// end Square.hh
//---------------------------------------------------------------------------//
