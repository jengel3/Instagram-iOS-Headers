
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

@property (assign,nonatomic) _GLKMatrix4 contentTransform;               //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;               //@synthesize textureTransform=_textureTransform - In the implementation block
@property (assign,nonatomic) float strength;                             //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) NSString * fullFragmentShader;              //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
@property (assign,nonatomic) char flip;                                  //@synthesize flip=_flip - In the implementation block
+(id)filterName;
+(id)overlayTitle;
+(int)filterType;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)contentTransform;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)textureTransform;
-(id)fullVertexShader;
-(NSString *)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)setFullFragmentShader:(NSString *)arg1 ;
-(id)generateFullFragmentShader;
-(id)fragmentShaderPrecision;
-(id)strengthShaderCode;
-(id)fragmentFunctions;
-(void)setFlip:(char)arg1 ;
-(void)configureProgram:(id)arg1 ;
-(id)vertexShader;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)flip;
-(float)strength;
-(void)setStrength:(float)arg1 ;
@end

