
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropPlace, NSNumber, IGRaindropPositionIn2D, NSString;

@interface IGRaindropPlaceClickEvent : TBaseStruct {

	IGRaindropPlace* __thrift_place;
	NSNumber* __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	NSString* __thrift_targetId;
	NSString* __thrift_placeId;

}
-(id)toDict;
-(id)initWithPlace:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 targetId:(id)arg6 placeId:(id)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

