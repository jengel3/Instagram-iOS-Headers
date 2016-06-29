
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, IGRaindropPositionIn2D;

@interface IGRaindropExploreImpressionEvent : TBaseStruct {

	NSString* __thrift_id;
	NSString* __thrift_type;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_impressionToken;
	NSString* __thrift_endpointType;

}
-(id)toDict;
-(id)initWithId:(id)arg1 type:(id)arg2 position:(id)arg3 algorithm:(id)arg4 impressionToken:(id)arg5 endpointType:(id)arg6 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

