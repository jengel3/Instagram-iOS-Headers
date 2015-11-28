
#import <libobjc.A.dylib/NSCoding.h>

@class NSURLResponse, NSData;

@interface IGURLCacheObject : NSObject <NSCoding> {

	NSURLResponse* _response;
	NSData* _data;

}

@property (nonatomic,readonly) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
-(id)cachedResponse;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURLResponse *)response;
@end

