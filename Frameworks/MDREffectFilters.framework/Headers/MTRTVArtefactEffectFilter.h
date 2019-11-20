//
//  MTRTVArtefactEffectFilter.h
//  Pods
//
//  Created by Yu Ao on 08/01/2018.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

@interface MTRTVArtefactEffectFilter : MTIUnaryImageRenderingFilter

@property (nonatomic) double timestamp;

@property (nonatomic) float fade; //Range(0,1)

@property (nonatomic) float colorisation; //Range(-10,10)

@property (nonatomic) float parasite; //Range(-10,10)

@property (nonatomic) float noise; //Range(-10,10)

@end
