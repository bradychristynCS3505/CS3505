/*
Authors: Brady Mathews and Christyn Phillippi
Filename: mpff.h
Last Modified: 2/23/2015
Version: 1.0
 */

#ifndef AVCODEC_MPFF_H
#define AVCODEC_MPFF_H

#include "avcodec.h"

typedef enum {
    MPFF_RGB         =0,
    MPFF_RLE8        =1,
    MPFF_RLE4        =2,
    MPFF_BITFIELDS   =3,
} BiCompression;

#endif /* AVCODEC_MPFF_H */
