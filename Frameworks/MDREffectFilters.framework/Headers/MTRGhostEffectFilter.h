//
//  MTRGhostEffectFilter.h
//  MDREffectFilters
//
//  Created by sunfei on 2019/11/19.
//

#import <MetalPetal/MetalPetal.h>

typedef NS_ENUM(NSUInteger, MTRGhostEffectFilterType) {
	MTRGhostEffectFilterCircle,
	MTRGhostEffectFilterVerticle,
	MTRGhostEffectFilterVerticle2,
	MTRGhostEffectFilterDouble
};

NS_ASSUME_NONNULL_BEGIN

@interface MTRGhostEffectFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, assign) MTRGhostEffectFilterType type;

@property (nonatomic, strong) MTIImage *colorOverlay0;
@property (nonatomic, strong) MTIImage *colorOverlay1;
@property (nonatomic, strong) MTIImage *colorOverlay2;

@property (nonatomic, strong) MTIImage *vertOverlay0;
@property (nonatomic, strong) MTIImage *vertOverlay1;
@property (nonatomic, strong) MTIImage *vertOverlay2;

@property (nonatomic, strong) MTIImage *circleMask0;
@property (nonatomic, strong) MTIImage *circleMask1;
@property (nonatomic, strong) MTIImage *circleMask2;
@property (nonatomic, strong) MTIImage *circleMask3;

@property (nonatomic, strong) MTIImage *vertMask;

@property (nonatomic, strong) MTIImage *lookup0;
@property (nonatomic, strong) MTIImage *lookup1;
@property (nonatomic, strong) MTIImage *lookup2;

@end

NS_ASSUME_NONNULL_END
