
#import <Instagram/IGFilter.h>

@class IGContext, NSBundle;

@interface IGGLFilter : IGFilter {

	IGContext* _context;
	NSBundle* _assetBundle;

}

@property (nonatomic,retain) NSBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(id)textureWithContentsOfData:(id)arg1 ;
-(id)programForContext:(id)arg1 ;
-(id)shaderConstsForSplineSamplers;
-(id)textureNamed:(id)arg1 ;
-(id)init;
-(id)samplers;
@end

