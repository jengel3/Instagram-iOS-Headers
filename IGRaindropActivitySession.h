
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropActivitySession : TBaseStruct {

	NSString* __thrift_sessionId;
	NSNumber* __thrift_sessionIdIndex;
	NSNumber* __thrift_lengthInMillis;

}
-(id)toDict;
-(id)initWithSessionId:(id)arg1 sessionIdIndex:(id)arg2 lengthInMillis:(id)arg3 ;
-(id)sessionIdIndex;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)sessionId;
@end

