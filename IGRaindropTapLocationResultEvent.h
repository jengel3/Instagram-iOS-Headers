
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropTapLocationResultEvent : TBaseStruct {

	NSNumber* __thrift_selectedPosition;
	NSString* __thrift_placeId;
	NSMutableArray* __thrift_resultList;
	NSString* __thrift_searchSessionId;

}
-(id)toDict;
-(id)initWithSelectedPosition:(id)arg1 placeId:(id)arg2 resultList:(NSMutableArray*)arg3 searchSessionId:(id)arg4 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

