
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFURLConnectionOperation.h>

@protocol AFURLResponseSerialization;
@class AFHTTPResponseSerializer, NSHTTPURLResponse;

@interface AFHTTPRequestOperation : AFURLConnectionOperation {

	AFHTTPResponseSerializer*<AFURLResponseSerialization> _responseSerializer;

}

@property (nonatomic,readonly) NSHTTPURLResponse * response; 
@property (nonatomic,retain) AFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer;              //@synthesize responseSerializer=_responseSerializer - In the implementation block
-(void)setResponseSerializer:(AFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
-(AFHTTPResponseSerializer*<AFURLResponseSerialization>)responseSerializer;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)pause;
@end

