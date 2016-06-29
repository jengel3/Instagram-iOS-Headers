
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGSplineTestFilter : IGImageFilter {

	IGSurface* _splineSurface;

}

@property (nonatomic,retain) IGSurface * splineSurface;              //@synthesize splineSurface=_splineSurface - In the implementation block
+(id)filterName;
+(int)filterType;
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(IGSurface *)splineSurface;
-(void)setSplineSurface:(IGSurface *)arg1 ;
-(id)fragmentShader;
-(id)samplers;
@end

