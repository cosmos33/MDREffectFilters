//
//  MTRComicEffectFilter.h
//  MetalPetalOSX
//
//  Created by Yu Ao on 2018/9/30.
//  Copyright © 2018 demo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

@interface MTRComicEffectFilter : NSObject <MTIFilter>

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@end

@interface MTRInkEffectFilter: NSObject <MTIFilter>

@property (nonatomic, strong, nullable) MTIImage *inputImage;

@end
