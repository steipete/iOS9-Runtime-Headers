/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {
    NSMapTable * _assertionsByIdentifier;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _sbXPCConnection;
}

@property (nonatomic, retain) NSMapTable *assertionsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *sbXPCConnection;
@property (readonly) Class superclass;

// SBSStatusBarStyleOverridesAssertionManager (null)

+ (id)sharedInstance;

- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(BOOL)arg2;
- (void)_reactivateAssertions;
- (void)_tearDownXPCConnection;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(id /* block */)arg2 onQueue:(id)arg3;
- (id)assertionsByIdentifier;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (id)sbXPCConnection;
- (void)setAssertionsByIdentifier:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setSbXPCConnection:(id)arg1;
- (void)updateStatusStringForAssertion:(id)arg1;

@end
