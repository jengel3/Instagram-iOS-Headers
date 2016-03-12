
#import <Instagram/IGStabilizationFilter.h>

@class IGSurface;

@interface IGStabilizationYUVFilter : IGStabilizationFilter {

	char _didSetYUVMatrix;
	IGSurface* _lumaSurface;
	IGSurface* _chromaSurface;

}

@property (nonatomic,retain) IGSurface * lumaSurface;                //@synthesize lumaSurface=_lumaSurface - In the implementation block
@property (nonatomic,retain) IGSurface * chromaSurface;              //@synthesize chromaSurface=_chromaSurface - In the implementation block
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)setYUVMatrixForProgram:(id)arg1 ;
-(IGSurface *)chromaSurface;
-(IGSurface *)lumaSurface;
-(void)setLumaSurface:(IGSurface *)arg1 ;
-(void)setChromaSurface:(IGSurface *)arg1 ;
@end

