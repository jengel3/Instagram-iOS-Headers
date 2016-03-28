
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeaturedUserInfo.h>

@class IGUser, NSArray;

@interface IGClusterUserInfo : IGFeaturedUserInfo {

	IGUser* _user;
	NSArray* _thumbnailURLs;
	NSArray* _mediaIDs;
	NSArray* _mediaBundles;

}
-(id)mediaBundles;
-(id)thumbnailURLs;
-(void)setThumbnailURLs:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 maxThumbnailCount:(int)arg2 thumbnailSize:(CGSize)arg3 ;
-(id)mediaIDs;
-(id)user;
@end

