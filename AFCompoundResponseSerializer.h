
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@class NSArray;

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer {

	NSArray* _responseSerializers;

}

@property (nonatomic,retain) NSArray * responseSerializers;              //@synthesize responseSerializers=_responseSerializers - In the implementation block
+(id)compoundSerializerWithResponseSerializers:(id)arg1 ;
-(void)setResponseSerializers:(NSArray *)arg1 ;
-(NSArray *)responseSerializers;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

