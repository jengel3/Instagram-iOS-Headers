
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGAntiLuxFilter : IGImageFilter {

	IGSurface* _blurredSurface;
	IGSurface* _claheCDF;
	float _filterStrength;

}

@property (nonatomic,retain) IGSurface * claheCDF;              //@synthesize claheCDF=_claheCDF - In the implementation block
@property (assign,nonatomic) float filterStrength;              //@synthesize filterStrength=_filterStrength - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setFilterStrength:(float)arg1 ;
-(float)filterStrength;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)configureProgram:(id)arg1 ;
-(IGSurface *)claheCDF;
-(void)setClaheCDF:(IGSurface *)arg1 ;
-(id)fragmentFunctions;
-(id)fragmentShader;
-(id)init;
-(id)samplers;
@end

