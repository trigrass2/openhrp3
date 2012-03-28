/*
 * Copyright (c) 2008, AIST, the University of Tokyo and General Robotix Inc.
 * All rights reserved. This program is made available under the terms of the
 * Eclipse Public License v1.0 which accompanies this distribution, and is
 * available at http://www.eclipse.org/legal/epl-v10.html
 * Contributors:
 * National Institute of Advanced Industrial Science and Technology (AIST)
 */

#ifndef OPENHRP_UBLAS_COMMON_TYPES_H_INCLUDED
#define OPENHRP_UBLAS_COMMON_TYPES_H_INCLUDED

#include <Eigen/Eigen>

namespace hrp {

    typedef Eigen::MatrixXd dmatrix;
    //typedef ublas::bounded_matrix<double, 3, 3, ublas::column_major> dmatrix33;
    //typedef ublas::bounded_matrix<double, 6, 6, ublas::column_major> dmatrix66;
    //typedef ublas::zero_matrix<double> dzeromatrix;
    //typedef ublas::identity_matrix<double> didentity;

    typedef Eigen::VectorXd dvector;
    //typedef ublas::bounded_vector<double, 3> dvector3;
    //typedef ublas::bounded_vector<double, 6> dvector6;
    //typedef ublas::zero_vector<double> dzerovector;
    //typedef ublas::unit_vector<double> dunit;
};

#endif
