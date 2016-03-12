
#import <Instagram/IGDirectGenericShareContentCell.h>

@class IGProfilePictureImageView;

@interface IGDirectShareProfileCell : IGDirectGenericShareContentCell {

	IGProfilePictureImageView* _sharedUserProfilePicture;

}

@property (nonatomic,retain) IGProfilePictureImageView * sharedUserProfilePicture;              //@synthesize sharedUserProfilePicture=_sharedUserProfilePicture - In the implementation block
+(float)sideImageWidth;
+(float)heightForProfile:(id)arg1 withWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(IGProfilePictureImageView *)sharedUserProfilePicture;
-(void)setSharedUserProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

