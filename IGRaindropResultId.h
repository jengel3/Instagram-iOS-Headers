
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber, IGRaindropPlace;

@interface IGRaindropResultId : TBaseStruct {

	NSString* __thrift_hashtagId;
	NSNumber* __thrift_userId;
	IGRaindropPlace* __thrift_placeId_DEPRECATED;
	NSString* __thrift_placeId;

}
-(id)toDict;
-(id)initWithPlaceId:(id)arg1 ;
-(id)placeId_DEPRECATED;
-(id)initWithHashtagId:(id)arg1 ;
-(id)initWithUserId:(id)arg1 ;
-(id)initWithPlaceId_DEPRECATED:(id)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)userId;
-(id)placeId;
@end

