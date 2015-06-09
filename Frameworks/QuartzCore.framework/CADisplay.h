/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplay : NSObject {
    void * _impl;
}

@property BOOL allowsVirtualModes;
@property (nonatomic, readonly) NSArray *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (getter=isCloned, readonly) BOOL cloned;
@property (getter=isCloningSupported, readonly) BOOL cloningSupported;
@property (nonatomic, copy) NSString *colorMode;
@property (readonly) unsigned int connectionSeed;
@property (nonatomic, retain) CADisplayMode *currentMode;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (getter=isExternal, readonly) BOOL external;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *overscanAdjustment;
@property (readonly) float overscanAmount;
@property (readonly) struct CGSize { float x1; float x2; } overscanAmounts;
@property (getter=isOverscanned, readonly) BOOL overscanned;
@property (nonatomic, readonly) CADisplayMode *preferredMode;
@property (readonly) int processId;
@property (readonly) double refreshRate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } safeBounds;
@property (readonly) unsigned int seed;
@property (getter=isSupported, readonly) BOOL supported;
@property (readonly) int tag;
@property (readonly) NSString *uniqueId;

+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;

- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} x3; struct __CFString {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; struct __CFString {} *x8; struct ModeSet { unsigned int x_9_1_1; unsigned int x_9_1_2[1]; } x9; int x10; int x11; int x12; struct Bounds { int x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct Bounds { int x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; unsigned int x15; unsigned int x16; struct Vec2<float> { float x_17_1_1; float x_17_1_2; } x17; int x18; bool x19; bool x20; bool x21; bool x22; bool x23; unsigned int x24; int x25; double x26; bool x27; bool x28; }*)arg1;
- (void)_invalidate;
- (BOOL)allowsVirtualModes;
- (id)availableModes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)colorMode;
- (unsigned int)connectionSeed;
- (id)currentMode;
- (id)description;
- (id)deviceName;
- (unsigned int)displayId;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (BOOL)isCloned;
- (BOOL)isCloningSupported;
- (BOOL)isExternal;
- (BOOL)isOverscanned;
- (BOOL)isSupported;
- (id)name;
- (id)overscanAdjustment;
- (float)overscanAmount;
- (struct CGSize { float x1; float x2; })overscanAmounts;
- (id)preferredMode;
- (int)processId;
- (double)refreshRate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })safeBounds;
- (unsigned int)seed;
- (void)setAllowsVirtualModes:(BOOL)arg1;
- (void)setColorMode:(id)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (int)tag;
- (id)uniqueId;
- (void)update;

@end