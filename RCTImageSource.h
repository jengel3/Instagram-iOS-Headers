

#import <Instagram/Instagram-Structs.h>
@class NSURL;

@interface RCTImageSource : NSObject {

	char _packagerAsset;
	NSURL* _imageURL;
	float _scale;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) CGSize size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float scale;                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) char packagerAsset;              //@synthesize packagerAsset=_packagerAsset - In the implementation block
-(char)packagerAsset;
-(id)initWithURL:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 ;
-(void)setPackagerAsset:(char)arg1 ;
-(id)imageSourceWithSize:(CGSize)arg1 scale:(float)arg2 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(float)scale;
-(NSURL *)imageURL;
@end

