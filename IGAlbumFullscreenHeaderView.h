
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGTapButton, IGProfilePictureImageView, UILabel;

@interface IGAlbumFullscreenHeaderView : UIView {

	IGTapButton* _dismissButton;
	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;
	UILabel* _timeLabel;

}

@property (nonatomic,readonly) UILabel * usernameLabel;                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                                       //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) IGTapButton * dismissButton;                               //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
-(IGProfilePictureImageView *)profileImageView;
-(UILabel *)usernameLabel;
-(void)configureWithFeedItems:(id)arg1 currentItem:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)timeLabel;
-(IGTapButton *)dismissButton;
@end

