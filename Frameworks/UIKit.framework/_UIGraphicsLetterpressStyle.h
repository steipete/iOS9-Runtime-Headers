/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
    UIColor * bottomGradientColor;
    UIColor * embossHighlightColor;
    UIColor * embossShadowColor;
    float  embossSize;
    float  innerOpacity;
    int  innerShadowBlendMode;
    float  innerShadowBlur;
    UIColor * innerShadowColor;
    struct CGPoint { 
        float x; 
        float y; 
    }  innerShadowOffset;
    int  outerShadowBlendMode;
    float  outerShadowBlur;
    UIColor * outerShadowColor;
    struct CGPoint { 
        float x; 
        float y; 
    }  outerShadowOffset;
    UIColor * topGradientColor;
}

@property (nonatomic, retain) UIColor *bottomGradientColor;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, retain) UIColor *embossHighlightColor;
@property (nonatomic, retain) UIColor *embossShadowColor;
@property (nonatomic) float embossSize;
@property (nonatomic) float innerOpacity;
@property (nonatomic) int innerShadowBlendMode;
@property (nonatomic) float innerShadowBlur;
@property (nonatomic, retain) UIColor *innerShadowColor;
@property (nonatomic) struct CGPoint { float x1; float x2; } innerShadowOffset;
@property (nonatomic) int outerShadowBlendMode;
@property (nonatomic) float outerShadowBlur;
@property (nonatomic, retain) UIColor *outerShadowColor;
@property (nonatomic) struct CGPoint { float x1; float x2; } outerShadowOffset;
@property (nonatomic, retain) UIColor *topGradientColor;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;

- (void).cxx_destruct;
- (id)bottomGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)embossHighlightColor;
- (id)embossShadowColor;
- (float)embossSize;
- (float)innerOpacity;
- (int)innerShadowBlendMode;
- (float)innerShadowBlur;
- (id)innerShadowColor;
- (struct CGPoint { float x1; float x2; })innerShadowOffset;
- (BOOL)isEqual:(id)arg1;
- (int)outerShadowBlendMode;
- (float)outerShadowBlur;
- (id)outerShadowColor;
- (struct CGPoint { float x1; float x2; })outerShadowOffset;
- (void)setBottomGradientColor:(id)arg1;
- (void)setEmbossHighlightColor:(id)arg1;
- (void)setEmbossShadowColor:(id)arg1;
- (void)setEmbossSize:(float)arg1;
- (void)setInnerOpacity:(float)arg1;
- (void)setInnerShadowBlendMode:(int)arg1;
- (void)setInnerShadowBlur:(float)arg1;
- (void)setInnerShadowColor:(id)arg1;
- (void)setInnerShadowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOuterShadowBlendMode:(int)arg1;
- (void)setOuterShadowBlur:(float)arg1;
- (void)setOuterShadowColor:(id)arg1;
- (void)setOuterShadowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTopGradientColor:(id)arg1;
- (id)topGradientColor;

@end