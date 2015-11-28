
#import <Instagram/IGTokenView.h>

@class IGProfilePictureImageView;

@interface IGAvatarTokenView : IGTokenView {

	IGProfilePictureImageView* _profilePictureView;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;              //@synthesize profilePictureView=_profilePictureView - In the implementation block
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
@end

