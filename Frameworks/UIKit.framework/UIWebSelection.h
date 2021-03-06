/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelection : NSObject {
    <UIWebSelectionBlock> * _base;
    struct CGSize { 
        float width; 
        float height; 
    }  _desiredSize;
    UIWebDocumentView * _documentView;
    <UIWebSelectionBlock> * _extent;
    UITextSelection * _textSelection;
}

@property (nonatomic, retain) <UIWebSelectionBlock> *base;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } boundingRect;
@property (nonatomic) struct CGSize { float x1; float x2; } desiredSize;
@property (nonatomic, readonly) UIWebDocumentView *documentView;
@property (nonatomic, retain) <UIWebSelectionBlock> *extent;
@property (getter=isTextOnly, nonatomic, readonly) BOOL textOnly;
@property (nonatomic, readonly) UITextSelection *textSelection;
@property (nonatomic, readonly) BOOL valid;

- (void)adjustSelectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 towardsPoint:(struct CGPoint { float x1; float x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)applySelectionToWebDocumentView;
- (id)asDomRange;
- (id)base;
- (id)blockAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)blockContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)blockOfSameWidthAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingTextSelectionRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingTextSelectionRectAndInsideFixedPosition:(int*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGSize { float x1; float x2; })desiredSize;
- (float)distanceBetweenFirstRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 second:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 edge:(int)arg3;
- (id)documentView;
- (id)domDocument;
- (id)duplicate;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)extent;
- (void)growFromEdge:(int)arg1;
- (void)growSelectionTowardsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithDocumentView:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSelection:(id)arg1;
- (BOOL)isTextOnly;
- (void)moveEdge:(int)arg1 outwards:(BOOL)arg2;
- (void)selectionChanged;
- (void)setBase:(id)arg1;
- (void)setDesiredSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setExtent:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 ignoringLargeBlocks:(BOOL)arg2;
- (void)shrinkFromEdge:(int)arg1;
- (void)shrinkSelectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 towardsPoint:(struct CGPoint { float x1; float x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)textRepresentation;
- (id)textSelection;
- (id)textSelectionRects;
- (BOOL)tryToShrinkToBaseAndExtent;
- (void)useBlock;
- (BOOL)valid;
- (id)webArchive;
- (id)webFrame;
- (id)webView;

@end
