

@class IGSurface;

@interface IGLuxBlendFilterCache : NSObject {

	IGSurface* _antiLuxSurface;
	IGSurface* _starlightSurface;

}

@property (nonatomic,retain) IGSurface * antiLuxSurface;                //@synthesize antiLuxSurface=_antiLuxSurface - In the implementation block
@property (nonatomic,retain) IGSurface * starlightSurface;              //@synthesize starlightSurface=_starlightSurface - In the implementation block
-(IGSurface *)antiLuxSurface;
-(void)setAntiLuxSurface:(IGSurface *)arg1 ;
-(IGSurface *)starlightSurface;
-(void)setStarlightSurface:(IGSurface *)arg1 ;
@end

