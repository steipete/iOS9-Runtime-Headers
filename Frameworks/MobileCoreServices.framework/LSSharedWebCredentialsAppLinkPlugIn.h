/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSSharedWebCredentialsAppLinkPlugIn : LSAppLinkPlugIn {
    NSString * _SWCServiceName;
    BOOL  _usesDetailsDictionary;
}

@property (copy) NSString *SWCServiceName;
@property BOOL usesDetailsDictionary;

- (id)SWCServiceName;
- (BOOL)appHasSWCApproval:(id)arg1;
- (id)callingBundleIdentifier;
- (void)dealloc;
- (void)getAppLinkWithCompletionHandler:(id /* block */)arg1;
- (BOOL)getApplicationProxy:(id*)arg1 forSWCResults:(id)arg2 requireApproval:(BOOL)arg3;
- (id)init;
- (void)setSWCServiceName:(id)arg1;
- (void)setUsesDetailsDictionary:(BOOL)arg1;
- (BOOL)usesDetailsDictionary;

@end
