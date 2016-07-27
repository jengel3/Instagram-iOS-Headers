
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface IGFeedItemFeaturedBadge : NSObject <NSCoding> {

	NSString* _title;
	NSURL* _url;
	NSString* _imageName;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
-(id)initWithTitle:(id)arg1 url:(id)arg2 imageName:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)imageName;
@end

