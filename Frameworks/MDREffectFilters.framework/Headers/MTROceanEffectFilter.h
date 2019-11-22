//
//  MTROceanEffectFilter.h
//  MDREffectFilters
//
//  Created by sunfei on 2019/11/18.
//

#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTROceanEffectFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, strong) MTIImage *overlay;

@end

NS_ASSUME_NONNULL_END
