/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    BOOL  _animateRange;
    <PageRangeDelegate> * _delegate;
    UIView * _dimmingView;
    UIImageView * _imageView;
    BOOL  _inRange;
    UILongPressGestureRecognizer * _longPressRecognizer;
    BOOL  _menuHiddenByTapInThisCell;
    BOOL  _menuPresented;
    int  _pageIndex;
    UITapGestureRecognizer * _tapRecognizer;
    BOOL  _thisCellIsPresentingMenu;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PageRangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) int pageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1;
- (BOOL)canModifyPageRange;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dimmingView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)menuDidHide:(id)arg1;
- (int)pageIndex;
- (void)prepareForReuse;
- (void)removePage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setEndPage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInRange:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPageIndex:(int)arg1;
- (void)setStartPage:(id)arg1;
- (void)showMenu;

@end
