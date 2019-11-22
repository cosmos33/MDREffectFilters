#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MTRComicEffectFilter.h"
#import "MTRDispersionEffectFilter.h"
#import "MTRGhostEffectFilter.h"
#import "MTRGlitterEffectFilter.h"
#import "MTRInstaRainbowEffectFilter.h"
#import "MTROceanEffectFilter.h"
#import "MTRSketchEffectFilter.h"
#import "MTRTVArtefactEffectFilter.h"

FOUNDATION_EXPORT double MDREffectFiltersVersionNumber;
FOUNDATION_EXPORT const unsigned char MDREffectFiltersVersionString[];

