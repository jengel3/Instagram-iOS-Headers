
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, IGDirectShareHeaderViewLayout, IGCoreTextView, UILabel, UIImageView, IGProfilePictureImageView;

@interface IGDirectShareHeaderView : UIView {

	NSString* _titleText;
	NSString* _subtitleText;
	IGDirectShareHeaderViewLayout* _layout;
	IGCoreTextView* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _chevronView;
	UIImageView* _sideImageView;
	IGProfilePictureImageView* _sharedUserProfilePicture;

}

@property (nonatomic,retain) IGCoreTextView * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                         //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                                       //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * sharedUserProfilePicture;              //@synthesize sharedUserProfilePicture=_sharedUserProfilePicture - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                              //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * subtitleText;                                           //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) IGDirectShareHeaderViewLayout * layout;                            //@synthesize layout=_layout - In the implementation block
+(id)titleStyledStringWithText:(id)arg1 ;
+(float)heightForLayout:(id)arg1 ;
-(id)createTitleLabel;
-(id)createSubtitleLabel;
-(id)createChevronView;
-(void)setSharedUserProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(void)setSideImageView:(UIImageView *)arg1 ;
-(UIImageView *)sideImageView;
-(IGProfilePictureImageView *)sharedUserProfilePicture;
-(void)layoutIcon;
-(void)layoutTitleAndSubtitle;
-(void)layoutChevronView;
-(void)setUserForProfileView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(IGCoreTextView *)titleLabel;
-(IGDirectShareHeaderViewLayout *)layout;
-(UILabel *)subtitleLabel;
-(void)setLayout:(IGDirectShareHeaderViewLayout *)arg1 ;
-(void)setTitleLabel:(IGCoreTextView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end

