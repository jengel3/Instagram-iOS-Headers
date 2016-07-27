
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@interface IGGaussianBlurFilter : IGImageFilter {

	char _needsConfigure;
	CGSize _dimension;
	GLKVector2 _blurVector;
	float _sigma;
	unsigned _kernelSize;

}

@property (assign,nonatomic) float sigma;                        //@synthesize sigma=_sigma - In the implementation block
@property (nonatomic,readonly) unsigned kernelSize;              //@synthesize kernelSize=_kernelSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)configureProgram:(id)arg1 ;
-(id)initWithKernelSize:(unsigned)arg1 ;
-(unsigned)kernelSize;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(id)fragmentShader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)sigma;
-(void)setSigma:(float)arg1 ;
@end

