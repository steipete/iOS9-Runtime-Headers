/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITintColorVisitor : _UIViewVisitor {
    UIView * _changedSubview;
    UIView * _originalVisitedView;
    unsigned int  _reasons;
    BOOL  _viewHasDefinedTintColor;
    BOOL  _viewHasNonAutomaticTintAdjustmentMode;
    BOOL  _visitedViewIsWindow;
}

- (void)_prepareForView:(id)arg1 trackingHierarchy:(BOOL)arg2;
- (BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (BOOL)_visitView:(id)arg1;
- (id)initWithNotificationReasons:(unsigned int)arg1;
- (id)initWithTraversalDirection:(unsigned int)arg1;

@end
