
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropMarquee, IGRaindropHashtag, IGRaindropUser, IGRaindropMedia, IGRaindropPlace;

@interface IGRaindropInstagramEntity : TBaseStruct {

	IGRaindropMarquee* __thrift_marquee;
	IGRaindropHashtag* __thrift_hashtag;
	IGRaindropUser* __thrift_user;
	IGRaindropMedia* __thrift_media;
	IGRaindropPlace* __thrift_place;

}
-(id)toDict;
-(id)initWithMarquee:(id)arg1 ;
-(id)initWithHashtag:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)initWithPlace:(id)arg1 ;
-(id)initWithMedia:(id)arg1 ;
@end

