
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGUser, IGProfilePictureImageView, UILabel;

@interface IGUnfollowHeaderView : UIView {

	IGUser* _user;
	IGProfilePictureImageView* _profilePic;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) IGUser * user;                                       //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(id)unfollowTitle;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

