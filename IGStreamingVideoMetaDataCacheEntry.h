
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGStreamingVideoMetaDataCacheEntry : NSObject <NSCoding> {

	NSString* _contentType;
	int _contentLength;

}

@property (nonatomic,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int contentLength;                   //@synthesize contentLength=_contentLength - In the implementation block
+(id)parseFromNSData:(id)arg1 ;
-(id)initWithContentType:(id)arg1 contentLength:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)contentType;
-(int)contentLength;
@end

