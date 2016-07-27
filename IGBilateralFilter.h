
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGBilateralFilter : IGImageFilter {

	char _needsConfigure;
	GLKVector2 _blurVector;
	IGSurface* _intermediateTexture;
	float _rangeSigma;
	float _spatialSigma;
	unsigned _spatialKernelSize;

}

@property (assign,nonatomic) float rangeSigma;                          //@synthesize rangeSigma=_rangeSigma - In the implementation block
@property (assign,nonatomic) float spatialSigma;                        //@synthesize spatialSigma=_spatialSigma - In the implementation block
@property (nonatomic,readonly) unsigned spatialKernelSize;              //@synthesize spatialKernelSize=_spatialKernelSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)configureProgram:(id)arg1 ;
-(id)initWithKernelSize:(unsigned)arg1 ;
-(float)rangeSigma;
-(void)setRangeSigma:(float)arg1 ;
-(float)spatialSigma;
-(void)setSpatialSigma:(float)arg1 ;
-(unsigned)spatialKernelSize;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

