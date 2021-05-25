/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://www.lammps.org/, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef PAIR_CLASS
// clang-format off
PairStyle(sph/taitwater,PairSPHTaitwater);
// clang-format on
#else

#ifndef LMP_PAIR_TAITWATER_H
#define LMP_PAIR_TAITWATER_H

#include "pair.h"

namespace LAMMPS_NS {

class PairSPHTaitwater : public Pair {
 public:
  PairSPHTaitwater(class LAMMPS *);
  virtual ~PairSPHTaitwater();
  virtual void compute(int, int);
  void settings(int, char **);
  void coeff(int, char **);
  virtual double init_one(int, int);

 protected:
  double *rho0, *soundspeed, *B;
  double **cut, **viscosity;
  int first;

  void allocate();
};

}    // namespace LAMMPS_NS

#endif
#endif
