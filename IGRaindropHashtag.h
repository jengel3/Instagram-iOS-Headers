
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, IGRaindropMedia;

@interface IGRaindropHashtag : TBaseStruct {

	NSString* __thrift_tagName;
	IGRaindropMedia* __thrift_media;

}
-(id)toDict;
-(id)initWithTagName:(id)arg1 media:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

