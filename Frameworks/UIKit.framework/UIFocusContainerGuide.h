/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusContainerGuide : UIFocusGuide {
    BOOL  _automaticallyDisableWhenContainingFocus;
    NSMapTable * _preferredFocusedViewMapTable;
    BOOL  _shouldPreferNearestSubview;
}

@property (nonatomic) BOOL automaticallyDisableWhenContainingFocus;
@property (nonatomic, retain) NSMapTable *preferredFocusedViewMapTable;
@property (nonatomic) BOOL shouldPreferNearestSubview;

- (void).cxx_destruct;
- (void)_didUpdateFocusToPreferredFocusedViewForHeading:(unsigned int)arg1;
- (BOOL)_focusRegionCanBecomeFocused;
- (BOOL)automaticallyDisableWhenContainingFocus;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)preferredFocusedViewForHeading:(unsigned int)arg1;
- (id)preferredFocusedViewMapTable;
- (void)setAutomaticallyDisableWhenContainingFocus:(BOOL)arg1;
- (void)setPreferredFocusedView:(id)arg1 forHeading:(unsigned int)arg2;
- (void)setPreferredFocusedViewMapTable:(id)arg1;
- (void)setShouldPreferNearestSubview:(BOOL)arg1;
- (BOOL)shouldPreferNearestSubview;

@end
