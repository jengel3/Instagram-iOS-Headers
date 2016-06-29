
#import <GLKit/GLKTextureInfo.h>

@interface IGTextureInfo : GLKTextureInfo {

	char _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _width;
	unsigned _height;
	int _alphaState;
	int _textureOrigin;

}

@property (assign) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (assign) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (assign) unsigned width;                    //@synthesize width=_width - In the implementation block
@property (assign) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (assign) int alphaState;                    //@synthesize alphaState=_alphaState - In the implementation block
@property (assign) int textureOrigin;                 //@synthesize textureOrigin=_textureOrigin - In the implementation block
@property (assign) char containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 ;
-(void)setAlphaState:(int)arg1 ;
-(void)setTextureOrigin:(int)arg1 ;
-(void)setContainsMipmaps:(char)arg1 ;
-(int)alphaState;
-(int)textureOrigin;
-(char)containsMipmaps;
-(void)setName:(unsigned)arg1 ;
-(unsigned)name;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
@end

