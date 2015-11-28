
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@interface AFImageResponseSerializer : AFHTTPResponseSerializer {

	char _automaticallyInflatesResponseImage;
	float _imageScale;

}

@property (assign,nonatomic) float imageScale;                                     //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,nonatomic) char automaticallyInflatesResponseImage;              //@synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage - In the implementation block
+(id)acceptablePathExtensions;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setAutomaticallyInflatesResponseImage:(char)arg1 ;
-(char)automaticallyInflatesResponseImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageScale:(float)arg1 ;
-(float)imageScale;
@end

