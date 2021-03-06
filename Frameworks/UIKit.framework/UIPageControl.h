/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageControl : UIControl {
    UIVisualEffectView * _backgroundVisualEffectView;
    int  _currentPage;
    UIImage * _currentPageImage;
    UIColor * _currentPageIndicatorTintColor;
    int  _displayedPage;
    NSMutableArray * _indicators;
    int  _lastUserInterfaceIdiom;
    _UILegibilitySettings * _legibilitySettings;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    }  _pageControlFlags;
    UIImage * _pageImage;
    UIColor * _pageIndicatorTintColor;
}

@property (nonatomic) int currentPage;
@property (nonatomic, retain) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) BOOL defersCurrentPageDisplay;
@property (nonatomic) BOOL hidesForSinglePage;
@property (getter=_legibilitySettings, setter=_setLegibilitySettings:, nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=_legibilityStyle, setter=_setLegibilityStyle:, nonatomic) int legibilityStyle;
@property (nonatomic) int numberOfPages;
@property (nonatomic, retain) UIColor *pageIndicatorTintColor;

- (void).cxx_destruct;
- (id)_activePageIndicatorImage;
- (void)_commonPageControlInit;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned int)_controlEventsForActionTriggered;
- (id)_correctIdiomaticNameForImageNamed:(id)arg1;
- (id)_createModernIndicatorImageFromView:(id)arg1;
- (id)_customPageIndicatorCurrentImageForPage:(int)arg1;
- (id)_customPageIndicatorImageForPage:(int)arg1;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (int)_displayedPage;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2;
- (id)_effectiveContentView;
- (BOOL)_hasCustomImageForPage:(int)arg1 enabled:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_indicatorFrameAtIndex:(int)arg1;
- (float)_indicatorSpacing;
- (id)_indicatorViewEnabled:(BOOL)arg1 index:(int)arg2;
- (id)_indicatorViewEnabled:(BOOL)arg1 index:(int)arg2 legible:(BOOL)arg3;
- (void)_invalidateIndicators;
- (id)_legibilitySettings;
- (int)_legibilityStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_modernBounds;
- (id)_modernColorEnabled:(BOOL)arg1;
- (float)_modernCornerRadius;
- (id)_modernIndicatorImageEnabled:(BOOL)arg1;
- (void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3 legible:(BOOL)arg4;
- (id)_pageIndicatorCurrentImageForPage:(int)arg1;
- (id)_pageIndicatorImage;
- (id)_pageIndicatorImageForPage:(int)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setCurrentPage:(int)arg1;
- (void)_setDisplayedPage:(int)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLegibilityStyle:(int)arg1;
- (BOOL)_shouldDrawLegibly;
- (void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3;
- (void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3 legible:(BOOL)arg4;
- (void)_updateCurrentPageDisplay;
- (BOOL)canBecomeFocused;
- (int)currentPage;
- (id)currentPageIndicatorTintColor;
- (BOOL)defersCurrentPageDisplay;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hidesForSinglePage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (int)numberOfPages;
- (id)pageIndicatorTintColor;
- (void)setCurrentPage:(int)arg1;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setDefersCurrentPageDisplay:(BOOL)arg1;
- (void)setHidesForSinglePage:(BOOL)arg1;
- (void)setNumberOfPages:(int)arg1;
- (void)setPageIndicatorTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForNumberOfPages:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateCurrentPageDisplay;

// UIPageControl (UIKitAccessibilityInterfaceBuilderSupport)

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
