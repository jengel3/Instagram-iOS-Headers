
#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class IGProfilePictureImageView;

@interface IGPublicThreadShareProfileCell : IGPublicThreadGenericShareContentCell {

	IGProfilePictureImageView* _sharedUserProfilePicture;

}

@property (nonatomic,retain) IGProfilePictureImageView * sharedUserProfilePicture;              //@synthesize sharedUserProfilePicture=_sharedUserProfilePicture - In the implementation block
+(float)heightForProfile:(id)arg1 withWidth:(float)arg2 ;
+(float)sideImageHeight;
+(float)sideImageWidth;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
-(id)previewMedia;
-(IGProfilePictureImageView *)sharedUserProfilePicture;
-(id)sideImageView;
-(void)setSharedUserProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

