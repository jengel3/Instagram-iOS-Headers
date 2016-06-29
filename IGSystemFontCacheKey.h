

@interface IGSystemFontCacheKey : NSObject {

	float _size;
	float _weight;

}
-(id)initWithSize:(float)arg1 weight:(float)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

