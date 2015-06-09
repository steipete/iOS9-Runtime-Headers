/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMatchMoveAnimation : CAAnimation

@property (getter=isAdditive) BOOL additive;
@property BOOL appliesRotation;
@property BOOL appliesScale;
@property BOOL appliesX;
@property BOOL appliesY;
@property (copy) NSString *keyPath;
@property CALayer *sourceLayer;
@property (copy) NSArray *sourcePoints;
@property BOOL targetsSuperlayer;

+ (id)defaultValueForKey:(id)arg1;

- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (BOOL)appliesRotation;
- (BOOL)appliesScale;
- (BOOL)appliesX;
- (BOOL)appliesY;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)isAdditive;
- (id)keyPath;
- (void)setAdditive:(BOOL)arg1;
- (void)setAppliesRotation:(BOOL)arg1;
- (void)setAppliesScale:(BOOL)arg1;
- (void)setAppliesX:(BOOL)arg1;
- (void)setAppliesY:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourcePoints:(id)arg1;
- (void)setTargetsSuperlayer:(BOOL)arg1;
- (id)sourceLayer;
- (id)sourcePoints;
- (BOOL)targetsSuperlayer;

@end