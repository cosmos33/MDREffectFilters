//
//  MTRInstaRainbowEffectFilter.h
//  Pods
//
//  Created by Yu Ao on 23/03/2018.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTRInstaRainbow: NSObject

@property (nonatomic, strong, readonly) MTIImage *content;
@property (nonatomic, readonly) simd_float2 position;
@property (nonatomic, readonly) float opacity;
@property (nonatomic, readonly) float brightness;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithContent:(MTIImage *)content position:(simd_float2)position brightness:(float)brightness opacity:(float)opacity NS_DESIGNATED_INITIALIZER;

@end

@interface MTRInstaRainbowEffectFilter : NSObject <MTIFilter>

@property (nonatomic) MTIImageOrientation orientation;

@property (nonatomic,copy) NSArray<MTRInstaRainbow *> *rainbows;

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@property (nonatomic, strong, nullable) MTIImage *lookupTableImage;

@end

NS_ASSUME_NONNULL_END
