

@class NSURL, NSString;

@interface IGDirectLink : NSObject {

	NSURL* _imageUrl;
	NSString* _title;
	NSURL* _url;
	NSURL* _redirectUrl;

}

@property (nonatomic,retain) NSURL * imageUrl;                 //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * redirectUrl;              //@synthesize redirectUrl=_redirectUrl - In the implementation block
-(NSURL *)imageUrl;
-(NSURL *)redirectUrl;
-(void)setImageUrl:(NSURL *)arg1 ;
-(void)setRedirectUrl:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
@end

