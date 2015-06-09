/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPhotoGrain : CIFilter {
    NSNumber * inputAmount;
    NSNumber * inputISO;
    CIImage * inputImage;
    NSNumber * inputSeed;
}

@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, copy) NSNumber *inputISO;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)_grainBlendAndMixKernel;
- (id)_interpolateGrainKernel;
- (id)_paddedTileKernel;
- (id)inputAmount;
- (id)inputISO;
- (id)inputImage;
- (id)inputSeed;
- (id)outputImage;
- (void)paramtersFor:(float)arg1 destination:(struct GrainParameters { float x1; float x2; float x3; float x4; }*)arg2 imageScaleFactor:(float)arg3;
- (void)setInputAmount:(id)arg1;
- (void)setInputISO:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSeed:(id)arg1;

@end