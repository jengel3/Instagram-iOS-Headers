
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumFullscreenHeaderViewDelegate;
@class IGProfilePictureImageView, UILabel, IGTapButton;

@interface IGAlbumFullscreenHeaderView : UIView {

	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;
	UILabel* _timeLabel;
	IGTapButton* _dismissButton;
	id<IGAlbumFullscreenHeaderViewDelegate> _delegate;

}

@property (nonatomic,readonly) UILabel * usernameLabel;                                              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                                                  //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) IGTapButton * dismissButton;                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;                         //@synthesize profileImageView=_profileImageView - In the implementation block
-(IGProfilePictureImageView *)profileImageView;
-(void)dismissTapped;
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 ;
-(UILabel *)usernameLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGAlbumFullscreenHeaderViewDelegate>)delegate;
-(UILabel *)timeLabel;
-(IGTapButton *)dismissButton;
@end

