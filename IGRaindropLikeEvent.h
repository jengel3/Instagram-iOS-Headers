
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropLikeEvent : TBaseStruct {

	NSNumber* __thrift_isLike;
	NSNumber* __thrift_mediaId;
	NSNumber* __thrift_isDoubleTap;
	NSNumber* __thrift_mediaOwnerId;
	NSNumber* __thrift_isFollow;
	NSString* __thrift_algorithm;
	NSNumber* __thrift_position;
	NSString* __thrift_targetId;
	NSString* __thrift_searchSessionToken;

}
-(id)toDict;
-(id)initWithIsLike:(id)arg1 mediaId:(id)arg2 isDoubleTap:(id)arg3 mediaOwnerId:(id)arg4 isFollow:(id)arg5 algorithm:(id)arg6 position:(id)arg7 targetId:(id)arg8 searchSessionToken:(id)arg9 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

