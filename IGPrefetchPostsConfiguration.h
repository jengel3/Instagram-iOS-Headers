

#import <Instagram/Instagram-Structs.h>
@interface IGPrefetchPostsConfiguration : NSObject {

	char _loadProfilePictures;
	char _fetchThumbnails;
	int _imageOption;
	int _videoVersion;
	CGSize _imageSize;
	long long _videoLoadLength;

}

@property (nonatomic,readonly) CGSize imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) int imageOption;                        //@synthesize imageOption=_imageOption - In the implementation block
@property (nonatomic,readonly) int videoVersion;                       //@synthesize videoVersion=_videoVersion - In the implementation block
@property (nonatomic,readonly) long long videoLoadLength;              //@synthesize videoLoadLength=_videoLoadLength - In the implementation block
@property (nonatomic,readonly) char loadProfilePictures;               //@synthesize loadProfilePictures=_loadProfilePictures - In the implementation block
@property (nonatomic,readonly) char fetchThumbnails;                   //@synthesize fetchThumbnails=_fetchThumbnails - In the implementation block
+(id)feedConfiguration;
+(id)gridConfiguration;
-(id)primaryImageURLsFromPost:(id)arg1 ;
-(id)secondaryImageURLsFromPost:(id)arg1 ;
-(id)videoURLsFromPost:(id)arg1 ;
-(long long)videoLoadLength;
-(id)initWithImageSize:(CGSize)arg1 imageOption:(int)arg2 videoVersion:(int)arg3 videoLoadLength:(long long)arg4 loadProfilePictures:(char)arg5 fetchThumbnails:(char)arg6 ;
-(char)fetchThumbnails;
-(int)imageOption;
-(id)urlForPhoto:(id)arg1 size:(CGSize)arg2 option:(int)arg3 ;
-(char)loadProfilePictures;
-(int)videoVersion;
-(CGSize)imageSize;
@end

