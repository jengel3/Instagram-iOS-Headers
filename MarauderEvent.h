
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSData, NSString;

@interface MarauderEvent : TBaseStruct {

	NSNumber* __thrift_timeStampInMilliseconds;
	NSData* __thrift_payload;
	NSString* __thrift_payloadStructName;
	NSString* __thrift_payloadStructNamespace;
	NSString* __thrift_customUserID;

}
-(id)toDict;
-(id)initWithTimeStampInMilliseconds:(id)arg1 payload:(id)arg2 payloadStructName:(id)arg3 payloadStructNamespace:(id)arg4 customUserID:(id)arg5 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

