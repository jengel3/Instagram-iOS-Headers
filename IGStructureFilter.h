
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface, IGBilateralFilter;

@interface IGStructureFilter : IGImageFilter {

	IGSurface* _bilateralImage;
	char _needsConfigure;
	float _structureStrength;
	IGBilateralFilter* _bilateralFilter;

}

@property (nonatomic,retain) IGBilateralFilter * bilateralFilter;              //@synthesize bilateralFilter=_bilateralFilter - In the implementation block
@property (assign,nonatomic) float structureStrength;                          //@synthesize structureStrength=_structureStrength - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(float)structureStrength;
-(void)setStructureStrength:(float)arg1 ;
-(IGBilateralFilter *)bilateralFilter;
-(void)setBilateralFilter:(IGBilateralFilter *)arg1 ;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
@end

