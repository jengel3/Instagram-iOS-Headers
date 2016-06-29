
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGUser, IGTapButton, IGProfilePictureImageView, UILabel;

@interface IGAlbumFeedbackCell : UICollectionViewCell {

	IGUser* _user;
	IGTapButton* _optionsButton;
	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) IGUser * user;                                               //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGTapButton * optionsButton;                               //@synthesize optionsButton=_optionsButton - In the implementation block
+(float)preferredHeight;
-(IGProfilePictureImageView *)profileImageView;
-(UILabel *)usernameLabel;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGTapButton *)optionsButton;
@end

