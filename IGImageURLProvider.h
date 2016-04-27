

@protocol IGImageURLProvider <NSObject,NSCoding>
@required
-(id)imageURLForWidth:(float)arg1;
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2;

@end

