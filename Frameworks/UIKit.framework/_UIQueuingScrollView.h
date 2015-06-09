/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIQueuingScrollView : UIScrollView {
    NSMutableArray * _completionStateQueue;
    struct { 
        unsigned int delegateInterestedInPendingScrolls : 1; 
        unsigned int delegateInterestedInCommittedScrolls : 1; 
        unsigned int delegateInterestedInCompletedScrolls : 1; 
        unsigned int delegateInterestedInBailedOutScrolls : 1; 
        unsigned int delegateInterestedFinishedScrolling : 1; 
        unsigned int delegateCanVetoSubviewLayout : 1; 
        unsigned int dataSourceSuppliesBeforeView : 1; 
        unsigned int dataSourceSuppliesAfterView : 1; 
        unsigned int dataSourceInterestedInFlushedViews : 1; 
    }  _delegateFlags;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _disabledScrollingRegion;
    BOOL  _manualScrollInProgress;
    int  _navigationOrientation;
    float  _pageSpacing;
    UIView * _pendingVisibleView;
    <_UIQueuingScrollViewDataSource> * _qDataSource;
    <_UIQueuingScrollViewDelegate> * _qDelegate;
    NSMutableArray * _viewStateQueue;
    NSArray * _views;
    NSArray * _wrapperViews;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } disabledScrollingRegion;
@property (nonatomic) float pageSpacing;
@property (nonatomic) <_UIQueuingScrollViewDataSource> *qDataSource;
@property (nonatomic) <_UIQueuingScrollViewDelegate> *qDelegate;
@property (nonatomic, readonly) UIView *visibleView;

- (void).cxx_destruct;
- (unsigned int)_abuttedPagingEdges;
- (void)_adjustContentInsets;
- (void)_boundsDidChangeToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(BOOL)arg2 didComplete:(BOOL)arg3;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(int)arg3 canComplete:(BOOL)arg4;
- (BOOL)_dataSourceProvidesViews;
- (id)_dequeueViewForIndex:(int)arg1;
- (void)_didEndDraggingManualScroll;
- (void)_didEndManualScroll;
- (void)_didEndProgrammaticScroll;
- (void)_didEndScroll:(BOOL)arg1;
- (void)_didScrollWithAnimation:(BOOL)arg1 force:(BOOL)arg2;
- (void)_enqueueAnimatedScrollInDirection:(int)arg1 withView:(id)arg2 completion:(id /* block */)arg3;
- (void)_enqueueCompletionState:(id)arg1;
- (void)_flushView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_invalidateOffscreenViews;
- (BOOL)_isDeceleratingInOppositionToNavigationDirection:(int)arg1;
- (BOOL)_isScrollInProgress:(BOOL)arg1;
- (int)_navigationDirectionForActiveScroll:(BOOL)arg1;
- (int)_navigationDirectionFromCurrentOffset;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_notifyDelegateDidCommitManualScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 canComplete:(BOOL)arg6;
- (void)_notifyDelegateDidEndManualScroll:(BOOL)arg1 toRevealView:(id)arg2 direction:(int)arg3 animated:(BOOL)arg4 didFinish:(BOOL)arg5 didComplete:(BOOL)arg6;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_notifyDelegateWillManuallyScroll:(BOOL)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(BOOL)arg4;
- (void)_replaceViews:(id)arg1 updatingContents:(BOOL)arg2 adjustContentInsets:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_requestViewForIndex:(int)arg1;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setWrappedViewAtIndex:(int)arg1 withView:(id)arg2;
- (id)_viewAfterView:(id)arg1;
- (id)_viewAtIndex:(int)arg1 loadingIfNecessary:(BOOL)arg2 updatingContents:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_viewBefore:(BOOL)arg1 view:(id)arg2;
- (id)_viewBeforeView:(id)arg1;
- (id)_visibleView;
- (BOOL)canBecomeFocused;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })disabledScrollingRegion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 navigationOrientation:(int)arg2;
- (BOOL)isManualScrollInProgress;
- (BOOL)isPreviousScrollCompatibleWithScrollInDirection:(int)arg1;
- (void)layoutSubviews;
- (float)pageSpacing;
- (id)qDataSource;
- (id)qDelegate;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDisabledScrollingRegion:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPageSpacing:(float)arg1;
- (void)setQDataSource:(id)arg1;
- (void)setQDelegate:(id)arg1;
- (void)setView:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)visibleView;

@end