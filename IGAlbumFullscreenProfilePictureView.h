
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGLabel;

@interface IGAlbumFullscreenProfilePictureView : UIView {

	IGProfilePictureImageView* _profilePic;
	IGLabel* _usernameLabel;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,readonly) IGLabel * usernameLabel;                             //@synthesize usernameLabel=_usernameLabel - In the implementation block
-(IGLabel *)usernameLabel;
-(IGProfilePictureImageView *)profilePic;
-(void)configureWithUser:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

