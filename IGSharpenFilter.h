
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface, IGGaussianBlurFilter;

@interface IGSharpenFilter : IGImageFilter {

	IGSurface* _blurredImage;
	IGGaussianBlurFilter* _blurFilter;

}

@property (nonatomic,retain) IGGaussianBlurFilter * blurFilter;              //@synthesize blurFilter=_blurFilter - In the implementation block
@property (assign,nonatomic) float sigma; 
@property (assign,nonatomic) unsigned kernelSize; 
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(unsigned)kernelSize;
-(id)strengthShaderCode;
-(void)setKernelSize:(unsigned)arg1 ;
-(IGGaussianBlurFilter *)blurFilter;
-(void)setBlurFilter:(IGGaussianBlurFilter *)arg1 ;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
-(float)sigma;
-(void)setSigma:(float)arg1 ;
@end

