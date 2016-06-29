
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, UILabel;

@interface IGHideHeaderView : UIView {

	char _showUser;
	IGProfilePictureImageView* _profilePic;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char showUser;                                       //@synthesize showUser=_showUser - In the implementation block
-(void)setShowUser:(char)arg1 ;
-(char)showUser;
-(void)hideUser:(id)arg1 suggested:(char)arg2 ;
-(void)hideItemName:(id)arg1 suggested:(char)arg2 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

