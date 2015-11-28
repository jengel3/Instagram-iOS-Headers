
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropMedia : TBaseStruct {

	NSString* __thrift_mediaId;
	NSString* __thrift_ownerId;
	int __thrift_contentType;

}
-(id)toDict;
-(id)initWithMediaId:(id)arg1 ownerId:(id)arg2 contentType:(int)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

