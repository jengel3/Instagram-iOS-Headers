
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGLFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGImageFilter : IGGLFilter <NSCopying> {

	char _needsConfigure;
	char _flip;
	float _strength;
	NSString* _fullFragmentShader;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (assign,nonatomic) char flip;                                  //@synthesize flip=_flip - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;               //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;               //@synthesize textureTransform=_textureTransform - In the implementation block
@property (assign,nonatomic) float strength;                             //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) NSString * fullFragmentShader;              //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
+(id)overlayTitle;
+(id)filterName;
+(int)filterType;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(id)fullVertexShader;
-(NSString *)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(id)strengthShaderCode;
-(void)setFullFragmentShader:(NSString *)arg1 ;
-(id)generateFullFragmentShader;
-(void)setFlip:(char)arg1 ;
-(id)vertexShader;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)flip;
-(float)strength;
-(void)setStrength:(float)arg1 ;
@end

