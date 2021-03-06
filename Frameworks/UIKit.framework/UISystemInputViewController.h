/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISystemInputViewController : UIViewController {
    NSMutableDictionary * _accessoryConstraints;
    NSMutableDictionary * _accessoryViewControllers;
    UIView * _containingView;
    UIView * _contentLayoutView;
    UIButton * _doneButton;
    NSArray * _editorConstraints;
    UIKBSystemLayoutViewController * _editorVC;
    NSLayoutConstraint * _horizontalAlignment;
    UIViewController * _inputVC;
    UIKeyboard * _keyboard;
    NSArray * _keyboardConstraints;
    UIInputViewController * _keyboardVC;
    BOOL  _needsSetupAgain;
    UIResponder<UITextInput> * _persistentDelegate;
    BOOL  _supportsTouchInput;
    NSLayoutConstraint * _verticalAlignment;
    BOOL  _willPresentFullscreen;
}

@property (nonatomic, retain) UIView *containingView;
@property (nonatomic, retain) UIView *contentLayoutView;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) NSArray *editorConstraints;
@property (nonatomic, retain) UIKBSystemLayoutViewController *editorVC;
@property (nonatomic, retain) NSLayoutConstraint *horizontalAlignment;
@property (nonatomic, retain) UIViewController *inputVC;
@property (nonatomic, retain) UIKeyboard *keyboard;
@property (nonatomic, retain) NSArray *keyboardConstraints;
@property (nonatomic, retain) UIInputViewController *keyboardVC;
@property (nonatomic, retain) UIResponder<UITextInput> *persistentDelegate;
@property (nonatomic) BOOL supportsTouchInput;
@property (nonatomic, retain) NSLayoutConstraint *verticalAlignment;
@property (nonatomic) BOOL willPresentFullscreen;

+ (BOOL)canUseSystemInputViewControllerForResponder:(id)arg1;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;

- (id)_accessoryViewControllerForEdge:(int)arg1;
- (void)_addAccessoryViewController:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_dismissSystemInputViewController;
- (unsigned int)_horizontalLayoutTypeForEdge:(int)arg1;
- (void)_removeAccessoryViewController:(id)arg1;
- (unsigned int)_verticalLayoutTypeForEdge:(int)arg1;
- (id)accessoryViewControllerForEdge:(int)arg1;
- (id)alignmentConstraintForAxis:(int)arg1;
- (id)constraintFromView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4;
- (id)constraintsForEdge:(int)arg1;
- (id)containingView;
- (id)contentLayoutView;
- (void)dealloc;
- (id)doneButton;
- (id)editorConstraints;
- (id)editorVC;
- (id)horizontalAlignment;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (id)inputVC;
- (id)keyboard;
- (id)keyboardConstraints;
- (id)keyboardVC;
- (id)persistentDelegate;
- (void)populateCoreHierarchy;
- (id)preferredFocusedItem;
- (void)reloadInputViewsForPersistentDelegate;
- (void)setAccessoryViewController:(id)arg1 forEdge:(int)arg2;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(int)arg2;
- (void)setConstraints:(id)arg1 forEdge:(int)arg2;
- (void)setContainingView:(id)arg1;
- (void)setContentLayoutView:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditorConstraints:(id)arg1;
- (void)setEditorVC:(id)arg1;
- (void)setHorizontalAlignment:(id)arg1;
- (void)setInputVC:(id)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setKeyboardConstraints:(id)arg1;
- (void)setKeyboardVC:(id)arg1;
- (void)setPersistentDelegate:(id)arg1;
- (void)setSupportsTouchInput:(BOOL)arg1;
- (void)setVerticalAlignment:(id)arg1;
- (void)setWillPresentFullscreen:(BOOL)arg1;
- (void)setupKeyboard;
- (BOOL)supportsTouchInput;
- (void)updateViewConstraints;
- (id)verticalAlignment;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)willPresentFullscreen;

@end
