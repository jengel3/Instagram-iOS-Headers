
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, IGRaindropPlace;

@interface IGRaindropViewPlacePageItem : TBaseStruct {

	NSNumber* __thrift_mediaId;
	NSNumber* __thrift_mediaOwnerId;
	IGRaindropPlace* __thrift_place;

}
-(id)toDict;
-(id)initWithMediaId:(id)arg1 mediaOwnerId:(id)arg2 place:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

