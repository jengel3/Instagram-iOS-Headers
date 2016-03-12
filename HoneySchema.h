
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface HoneySchema : TBaseStruct {

	NSString* __thrift_sessionID;
	NSNumber* __thrift_seq;

}
-(id)toDict;
-(id)initWithSessionID:(id)arg1 seq:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

