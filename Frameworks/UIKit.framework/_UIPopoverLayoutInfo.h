/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
    unsigned int  _arrowDirection;
    float  _arrowHeight;
    BOOL  _canOverlapSourceViewRect;
    NSMutableArray * _candidates;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _containingFrame;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _containingFrameInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _frame;
    float  _offset;
    BOOL  _preferLandscapeOrientations;
    unsigned int  _preferredArrowDirections;
    struct CGSize { 
        float width; 
        float height; 
    }  _preferredContentSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceViewRect;
    BOOL  _updatesEnabled;
}

@property (nonatomic, readonly) unsigned int arrowDirection;
@property (nonatomic) float arrowHeight;
@property (nonatomic) BOOL canOverlapSourceViewRect;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } containingFrame;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } containingFrameInsets;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) float offset;
@property (nonatomic) BOOL preferLandscapeOrientations;
@property (nonatomic) unsigned int preferredArrowDirections;
@property (nonatomic) struct CGSize { float x1; float x2; } preferredContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceViewRect;
@property (getter=_updatesEnabled, setter=_setUpdatesEnabled:, nonatomic) BOOL updatesEnabled;

+ (id)_observationKeys;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_popoverViewSizeForContentSize:(struct CGSize { float x1; float x2; })arg1 arrowDirection:(unsigned int)arg2;
- (void)_setUpdatesEnabled:(BOOL)arg1;
- (void)_updateOutputs;
- (BOOL)_updatesEnabled;
- (unsigned int)arrowDirection;
- (float)arrowHeight;
- (BOOL)canOverlapSourceViewRect;
- (id)candidates;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containingFrame;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })containingFrameInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)offset;
- (BOOL)preferLandscapeOrientations;
- (unsigned int)preferredArrowDirections;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setArrowHeight:(float)arg1;
- (void)setCanOverlapSourceViewRect:(BOOL)arg1;
- (void)setContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContainingFrameInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreferLandscapeOrientations:(BOOL)arg1;
- (void)setPreferredArrowDirections:(unsigned int)arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSourceViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceViewRect;
- (void)updateProperties:(id /* block */)arg1;

@end
