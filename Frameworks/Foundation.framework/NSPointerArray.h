/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPointerArray : NSObject <NSCoding, NSCopying, NSFastEnumeration>

@property unsigned int count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerArrayWithOptions:(unsigned int)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;

- (void)addPointer:(void*)arg1;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned int)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned int)arg2;
- (void*)pointerAtIndex:(unsigned int)arg1;
- (id)pointerFunctions;
- (void)removePointerAtIndex:(unsigned int)arg1;
- (void)replacePointerAtIndex:(unsigned int)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned int)arg1;

// NSPointerArray (NSArrayConveniences)

+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;

- (id)allObjects;
- (id)mutableArray;

@end