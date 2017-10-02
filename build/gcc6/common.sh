
GCCMAJOR=6
GCCVER=6.4.0
OPT=/opt/gcc-$GCCMAJOR
PKGV=gcc$GCCMAJOR

XFORM_ARGS="-D MAJOR=$GCCMAJOR -D PKGV=$PKGV -D OPT=$OPT -D GCCVER=$GCCVER"

# Build GCC6 with GCC6
export LD_LIBRARY_PATH=$OPT/lib
export PATH=/usr/perl5/$PERLVER/bin:$OPT/bin:$PATH
