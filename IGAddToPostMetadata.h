
#import <Instagram/IGMediaMetadataProtocol.h>

@class UIImage, NSURL, NSString, IGLocation;

@interface IGAddToPostMetadata : NSObject <IGMediaMetadataProtocol> {

	UIImage* _thumbnailImage;
	NSURL* _thumbnailURL;
	NSString* _albumPK;
	NSString* _caption;
	IGLocation* _location;

}

@property (nonatomic,retain) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSURL * thumbnailURL;                  //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy) NSString * albumPK;                      //@synthesize albumPK=_albumPK - In the implementation block
@property (nonatomic,copy) NSString * caption;                      //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) IGLocation * location;                 //@synthesize location=_location - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(NSString *)albumPK;
-(void)setAlbumPK:(NSString *)arg1 ;
-(UIImage *)thumbnailImage;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(void)setThumbnailImage:(UIImage *)arg1 ;
@end

