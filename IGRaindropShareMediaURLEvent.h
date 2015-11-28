
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropShareMediaURLEvent : TBaseStruct {

	NSNumber* __thrift_mediaId;
	NSNumber* __thrift_mediaOwnerId;

}
-(id)toDict;
-(id)initWithMediaId:(id)arg1 mediaOwnerId:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

