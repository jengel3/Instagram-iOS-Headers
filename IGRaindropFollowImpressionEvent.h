
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropFollowImpressionEvent : TBaseStruct {

	NSNumber* __thrift_isFollow;
	NSNumber* __thrift_targetUserId;
	NSNumber* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clickPoint;
	NSString* __thrift_errorMessage;
	NSNumber* __thrift_sectionNumber;

}
-(id)toDict;
-(id)initWithIsFollow:(id)arg1 targetUserId:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clickPoint:(id)arg5 errorMessage:(id)arg6 sectionNumber:(id)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

