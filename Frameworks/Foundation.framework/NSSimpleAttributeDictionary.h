/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleAttributeDictionary : NSDictionary {
    /* Warning: unhandled struct encoding: '{_NSSimpleAttributeDictionaryElement="hash"I"key"@"value"@}]' */ struct _NSSimpleAttributeDictionaryElement { 
        unsigned int hash; 
        id key; 
    }  elements;
    unsigned int  numElements;
    unsigned int  refCount;
}

+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)finalize;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newWithKey:(id)arg1 object:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)slotForKey:(id)arg1;

@end
