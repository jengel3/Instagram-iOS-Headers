
#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class IGProfilePictureImageView;

@interface IGPublicThreadShareProfileCell : IGPublicThreadGenericShareContentCell {

	IGProfilePictureImageView* _sharedUserProfilePicture;

}

@property (nonatomic,retain) IGProfilePictureImageView * sharedUserProfilePicture;              //@synthesize sharedUserProfilePicture=_sharedUserProfilePicture - In the implementation block
+(float)sideImageWidth;
+(float)sideImageHeight;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
+(float)heightForProfile:(id)arg1 withWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(IGProfilePictureImageView *)sharedUserProfilePicture;
-(void)setSharedUserProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

