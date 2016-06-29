
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, IGProfilePictureImageView, UIImageView;

@interface IGUserHeaderView : UIView {

	UIButton* _followButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGProfilePictureImageView* _imageView;
	UIImageView* _verifiedImageView;

}

@property (nonatomic,retain) UIButton * followButton;                            //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                    //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
-(void)setFollowButton:(UIButton *)arg1 ;
-(UIButton *)followButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(IGProfilePictureImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(IGProfilePictureImageView *)arg1 ;
-(UIImageView *)verifiedImageView;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
@end

