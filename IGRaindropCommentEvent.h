
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropCommentEvent : TBaseStruct {

	NSNumber* __thrift_mediaId;
	NSNumber* __thrift_mediaOwnerId;
	NSString* __thrift_commentText;

}
-(id)toDict;
-(id)initWithMediaId:(id)arg1 mediaOwnerId:(id)arg2 commentText:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

