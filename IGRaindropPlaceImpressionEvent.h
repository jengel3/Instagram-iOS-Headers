
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropPlace, NSNumber, IGRaindropPositionIn2D, NSString;

@interface IGRaindropPlaceImpressionEvent : TBaseStruct {

	IGRaindropPlace* __thrift_place;
	NSNumber* __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSNumber* __thrift_viewed;
	NSNumber* __thrift_subImpression;
	NSString* __thrift_clusterKey;
	NSString* __thrift_targetId;
	NSString* __thrift_placeId;

}
-(id)toDict;
-(id)initWithPlace:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 viewed:(id)arg5 subImpression:(id)arg6 clusterKey:(id)arg7 targetId:(id)arg8 placeId:(id)arg9 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

