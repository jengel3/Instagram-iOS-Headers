

@class NSValue;

@interface IGGLUniform : NSObject {

	int _location;
	int _size;
	unsigned _type;
	NSValue* _value;
	id _texture;
	int _textureUnit;

}

@property (nonatomic,readonly) int location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) int size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id texture;                   //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) int textureUnit;              //@synthesize textureUnit=_textureUnit - In the implementation block
-(id)initWithLocation:(int)arg1 size:(int)arg2 type:(unsigned)arg3 ;
-(void)setTextureUnit:(int)arg1 ;
-(int)textureUnit;
-(int)size;
-(void)flush;
-(unsigned)type;
-(NSValue *)value;
-(void)setValue:(NSValue *)arg1 ;
-(int)location;
-(id)texture;
-(void)setTexture:(id)arg1 ;
@end

