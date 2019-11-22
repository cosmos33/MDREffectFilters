//
//  MTRDispersionEffectFilter.h
//  Pods
//
//  Created by Yu Ao on 2018/5/6.
//

#import <MetalPetal/MetalPetal.h>

@interface MTRDispersionEffectFilter : MTIUnaryImageRenderingFilter

@property (nonatomic) float radius;
@property (nonatomic) float refraction;
@property (nonatomic) float strength;

@end
