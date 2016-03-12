
#import <Instagram/IGMediaMetadataProtocol.h>

@class UIImage, NSURL, NSString;

@interface IGAddToPostMetadata : NSObject <IGMediaMetadataProtocol> {

	UIImage* _thumbnailImage;
	NSURL* _thumbnailURL;
	NSString* _albumPK;

}

@property (nonatomic,retain) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSURL * thumbnailURL;                  //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy) NSString * albumPK;                      //@synthesize albumPK=_albumPK - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlbumPK:(NSString *)arg1 ;
-(void)prepareToShare;
-(id)sharingInfo;
-(NSString *)albumPK;
-(UIImage *)thumbnailImage;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(void)setThumbnailImage:(UIImage *)arg1 ;
@end

