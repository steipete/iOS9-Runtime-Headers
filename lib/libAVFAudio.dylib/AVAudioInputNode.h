/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

// AVAudioInputNode (null)

- (id)initWithIOUnit:(struct AVAudioIOUnit { int (**x1)(); id x2; struct AVAudioEngineImpl {} x3; struct OpaqueAudioComponentInstance {} *x4; id x5; }*)arg1;
- (float)rate;
- (void)setRate:(float)arg1;

@end
