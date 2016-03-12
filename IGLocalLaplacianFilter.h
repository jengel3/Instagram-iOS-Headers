
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGLocalLaplacianFilter : IGImageFilter {

	IGSurface* _localLaplacianMask;
	float _filterStrength;

}

@property (nonatomic,retain) IGSurface * localLaplacianMask;              //@synthesize localLaplacianMask=_localLaplacianMask - In the implementation block
@property (assign,nonatomic) float filterStrength;                        //@synthesize filterStrength=_filterStrength - In the implementation block
+(id)localLaplacianMaskForImage:(CVBufferRef)arg1 levels:(int)arg2 alpha:(float)arg3 beta:(float)arg4 applyToLuma:(char)arg5 ;
+(id)localLaplacianMaskForImage:(CVBufferRef)arg1 ;
-(float)filterStrength;
-(void)setFilterStrength:(float)arg1 ;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(void)setLocalLaplacianMask:(IGSurface *)arg1 ;
-(IGSurface *)localLaplacianMask;
-(id)fragmentShader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
@end

