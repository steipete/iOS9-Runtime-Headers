/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibStringIDTable : NSObject {
    struct UIStringIDTableBucket { id x1; struct UIStringIDTableBucket {} *x2; } * buckets;
    unsigned int  count;
    unsigned int  hashMask;
    struct UIStringIDTableBucket {} ** table;
}

- (int)count;
- (void)dealloc;
- (id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned int)arg2;
- (BOOL)lookupKey:(id)arg1 identifier:(int*)arg2;

@end