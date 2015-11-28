
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropViewHashtagPageItem : TBaseStruct {

	NSString* __thrift_hashtagText;
	NSNumber* __thrift_mediaId;
	NSNumber* __thrift_mediaOwnerId;

}
-(id)toDict;
-(id)initWithHashtagText:(id)arg1 mediaId:(id)arg2 mediaOwnerId:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

