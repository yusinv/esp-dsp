#ifndef _dsps_addc_platform_H_
#define _dsps_addc_platform_H_

#include <xtensa/config/core-isa.h>
#include <xtensa/config/core-matmap.h>


#if ((XCHAL_HAVE_FP == 1) && (XCHAL_HAVE_LOOPS == 1))

#define dsps_addc_f32_ae32_enabled  1

#endif


#endif // _dsps_addc_platform_H_