//header guard
#ifndef BOND_ANGLE_H
#define BOND_ANGLE_H

using namespace std;

//header content
///calculation of interatomic unit vectors
double ex_ji(double x_j, double x_i, double R_ji); 

double ey_ji(double y_j, double y_i, double R_ji); 

double ez_ji(double z_j, double z_i, double R_ji);

double ex_jk(double x_j, double x_k, double R_jk);

double ey_jk(double y_j, double y_k, double R_jk);

double ez_jk(double z_j, double z_k, double R_jk);

double ex_kl(double x_k, double x_l, double R_kl);

double ey_kl(double y_k, double y_l, double R_kl);

double ez_kl(double z_k, double z_l, double R_kl);

///calculation of bond angles (phi)
double phi_ijk(double ex_ji, double ey_ji, double ez_ji, double ex_jk, double ey_jk, double ez_jk);

double phi_jkl(double ex_kj, double ey_kj, double ez_kj, double ex_kl, double ey_kl, double ez_kl);

