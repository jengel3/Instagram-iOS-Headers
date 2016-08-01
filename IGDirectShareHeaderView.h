
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGDirectShareHeaderViewLayout, UILabel, UIImageView, IGProfilePictureImageView;

@interface IGDirectShareHeaderView : UIView {

	IGDirectShareHeaderViewLayout* _layout;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _chevronView;
	UIImageView* _sideImageView;
	IGProfilePictureImageView* _sharedUserProfilePicture;

}

@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                         //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                                       //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * sharedUserProfilePicture;              //@synthesize sharedUserProfilePicture=_sharedUserProfilePicture - In the implementation block
@property (nonatomic,retain) IGDirectShareHeaderViewLayout * layout;                            //@synthesize layout=_layout - In the implementation block
-(id)createTitleLabel;
-(id)createSubtitleLabel;
-(float)heightWithWidth:(float)arg1 ;
-(void)setUserForProfileView:(id)arg1 ;
-(id)createChevronView;
-(void)setSharedUserProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(void)setSideImageView:(UIImageView *)arg1 ;
-(IGProfilePictureImageView *)sharedUserProfilePicture;
-(void)layoutTitleAndSubtitle;
-(void)layoutChevronView;
-(float)titleOffsetX;
-(float)titleFrameWidth:(float)arg1 ;
-(float)subtitleHeight;
-(float)chevronFrameWidth;
-(float)heightForTextsWithWidth:(float)arg1 ;
-(float)heightForIcon;
-(void)layoutIcon;
-(UIImageView *)sideImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(UILabel *)titleLabel;
-(IGDirectShareHeaderViewLayout *)layout;
-(UILabel *)subtitleLabel;
-(void)setLayout:(IGDirectShareHeaderViewLayout *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)setSubtitleText:(id)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end

