//
//  Created by ktiays on 2025/6/10.
//  Copyright (c) 2025 ktiays. All rights reserved.
// 

#import <UIKit/UIKit.h>

@interface _UIViewGlass : NSObject

@property (nonatomic, readonly) NSInteger variant;
@property (nonatomic, readonly) NSInteger size;
@property (nonatomic, assign) NSInteger identifier;
@property (nonatomic) CGFloat smoothness;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *controlTintColor;
@property (nonatomic, copy) NSString *subvariant;
@property (nonatomic, assign) BOOL contentLensing;
@property (nonatomic, assign) BOOL highlightsDisplayAngle;
@property (nonatomic, assign) BOOL excludingPlatter;
@property (nonatomic, assign) BOOL excludingForeground;
@property (nonatomic, assign) BOOL excludingShadow;
@property (nonatomic, assign) BOOL excludingControlLensing;
@property (nonatomic, assign) BOOL excludingControlDisplacement;
@property (nonatomic, assign) BOOL flexible;
@property (nonatomic, assign, setter=_setFlexVariant:) NSInteger _flexVariant;
@property (nonatomic, assign) BOOL boostWhitePoint;
@property (nonatomic, assign) BOOL allowsGrouping;
@property (nonatomic, copy) NSString *backdropGroupName;

- (id)init;
- (id)initWithVariant:(NSInteger)variant;
- (id)initWithVariant:(NSInteger)variant size:(NSInteger)size;
- (id)initWithVariant:(NSInteger)variant size:(NSInteger)size smoothness:(CGFloat)smoothness;
- (id)initWithVariant:(NSInteger)variant size:(NSInteger)size smoothness:(CGFloat)smoothness state:(NSInteger)state;
- (id)initWithVariant:(NSInteger)variant size:(NSInteger)size smoothness:(CGFloat)smoothness subdued:(BOOL)subdued;
- (id)initWithVariant:(NSInteger)variant size:(NSInteger)size state:(NSInteger)state;
- (id)initWithVariant:(NSInteger)variant smoothness:(CGFloat)smoothness;
- (id)initWithVariant:(NSInteger)variant smoothness:(CGFloat)smoothness state:(NSInteger)state;
- (id)initWithVariant:(NSInteger)variant state:(NSInteger)state;

- (void)setAdaptiveFixedLuminance:(CGFloat)luminance;
- (void)setAdaptiveInitialLuminance:(CGFloat)luminance;
- (void)setAdaptive:(BOOL)adpative;
- (void)setAdaptiveStyle:(NSInteger)adaptiveStyle;

- (id)_resolvedMaterialUsingTraitCollection:(UITraitCollection *)traitCollection size:(CGSize)size;

@end
