/*

PICCANTE
The hottest HDR imaging library!
http://vcg.isti.cnr.it/piccante

Copyright (C) 2014
Visual Computing Laboratory - ISTI CNR
http://vcg.isti.cnr.it
First author: Francesco Banterle

PICCANTE is free software; you can redistribute it and/or modify
under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation; either version 3.0 of
the License, or (at your option) any later version.

PICCANTE is distributed in the hope that it will be useful, but
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License
( http://www.gnu.org/licenses/lgpl-3.0.html ) for more details.

*/


#ifndef PIC_FILTERING_HPP
#define PIC_FILTERING_HPP

#include "filtering/filter.hpp"
#include "filtering/filter_integral_image.hpp"
#include "filtering/filter_reconstruct.hpp"
#include "filtering/filter_warp_2d.hpp"
#include "filtering/filter_absolute_difference.hpp"
#include "filtering/filter_anisotropic_diffusion.hpp"
#include "filtering/filter_assemble_hdr.hpp"
#include "filtering/filter_backward_difference.hpp"
#include "filtering/filter_bilateral_1d.hpp"
#include "filtering/filter_bilateral_2das.hpp"
#include "filtering/filter_bilateral_2df.hpp"
#include "filtering/filter_bilateral_2dg.hpp"
#include "filtering/filter_bilateral_2ds.hpp"
#include "filtering/filter_bilateral_2dsp.hpp"
#include "filtering/filter_channel.hpp"
#include "filtering/filter_color_conv.hpp"
#include "filtering/filter_color_distance.hpp"
#include "filtering/filter_combine.hpp"
#include "filtering/filter_conv_1d.hpp"
#include "filtering/filter_conv_2d.hpp"
#include "filtering/filter_conv_2dsp.hpp"
#include "filtering/filter_crop.hpp"
#include "filtering/filter_dct_1d.hpp"
#include "filtering/filter_dct_2d.hpp"
#include "filtering/filter_diff_gauss_2d.hpp"
#include "filtering/filter_divergence.hpp"
#include "filtering/filter_downsampler_2d.hpp"
#include "filtering/filter_drago_tmo.hpp"
#include "filtering/filter_gaussian_1d.hpp"
#include "filtering/filter_gaussian_2d.hpp"
#include "filtering/filter_gaussian_3d.hpp"
#include "filtering/filter_gradient.hpp"
#include "filtering/filter_guided.hpp"
#include "filtering/filter_iterative.hpp"
#include "filtering/filter_kuwahara.hpp"
#include "filtering/filter_laplacian.hpp"
#include "filtering/filter_linear_color_space.hpp"
#include "filtering/filter_luminance.hpp"
#include "filtering/filter_max.hpp"
#include "filtering/filter_mean.hpp"
#include "filtering/filter_med.hpp"
#include "filtering/filter_min.hpp"
#include "filtering/filter_mosaic.hpp"
#include "filtering/filter_normal.hpp"
#include "filtering/filter_npasses.hpp"
#include "filtering/filter_nswe.hpp"
#include "filtering/filter_remove_nuked.hpp"
#include "filtering/filter_sampler_1d.hpp"
#include "filtering/filter_sampler_2d.hpp"
#include "filtering/filter_sampler_2dadd.hpp"
#include "filtering/filter_sampler_2dsub.hpp"
#include "filtering/filter_sampler_3d.hpp"
#include "filtering/filter_sampling_map.hpp"
#include "filtering/filter_sigmoid_tmo.hpp"
#include "filtering/filter_simple_tmo.hpp"
#include "filtering/filter_wls.hpp"

#endif /* PIC_FILTERING_HPP */
