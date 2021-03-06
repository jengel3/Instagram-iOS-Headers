

@class GLKTextureInfo, EAGLContext;

@interface IGTexture : NSObject {

	GLKTextureInfo* _textureInfo;
	int _wrapSMode;
	int _wrapTMode;
	int _minFilter;
	int _magFilter;
	EAGLContext* _context;

}

@property (nonatomic,retain) EAGLContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) GLKTextureInfo * textureInfo;              //@synthesize textureInfo=_textureInfo - In the implementation block
@property (assign,nonatomic) int wrapSMode;                               //@synthesize wrapSMode=_wrapSMode - In the implementation block
@property (assign,nonatomic) int wrapTMode;                               //@synthesize wrapTMode=_wrapTMode - In the implementation block
@property (assign,nonatomic) int minFilter;                               //@synthesize minFilter=_minFilter - In the implementation block
@property (assign,nonatomic) int magFilter;                               //@synthesize magFilter=_magFilter - In the implementation block
-(id)initWithContext:(id)arg1 contentsOfData:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithContext:(id)arg1 contentsOfFile:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(GLKTextureInfo *)textureInfo;
-(id)initWithContext:(id)arg1 textureInfo:(id)arg2 ;
-(int)convertWrapMode:(int)arg1 ;
-(int)convertMinFilter:(int)arg1 ;
-(int)convertMagFilter:(int)arg1 ;
-(id)initWithContext:(id)arg1 width:(int)arg2 height:(int)arg3 data:(void*)arg4 ;
-(void)setWrapSMode:(int)arg1 ;
-(void)setWrapTMode:(int)arg1 ;
-(int)wrapSMode;
-(int)wrapTMode;
-(int)minFilter;
-(int)magFilter;
-(void)setMinFilter:(int)arg1 ;
-(void)setMagFilter:(int)arg1 ;
-(void)setDefaults;
-(void)dealloc;
-(EAGLContext *)context;
-(void)setContext:(EAGLContext *)arg1 ;
@end

