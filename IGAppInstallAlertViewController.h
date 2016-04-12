
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>

@protocol IGAppInstallAlertViewControllerDelegate;
@class UILabel, UIImageView, IGAssetPlayerView, UIButton, IGButton;

@interface IGAppInstallAlertViewController : IGViewController {

	id<IGAppInstallAlertViewControllerDelegate> _delegate;
	int _type;
	UILabel* _titleLabel;
	UIImageView* _exampleImageView;
	IGAssetPlayerView* _playerView;
	UILabel* _appDescriptionLabel;
	UIButton* _cancelButton;
	IGButton* _confirmButton;

}

@property (assign,nonatomic,__weak) id<IGAppInstallAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int type;                                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * exampleImageView;                                           //@synthesize exampleImageView=_exampleImageView - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                           //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UILabel * appDescriptionLabel;                                            //@synthesize appDescriptionLabel=_appDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) IGButton * confirmButton;                                                 //@synthesize confirmButton=_confirmButton - In the implementation block
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(UILabel *)appDescriptionLabel;
-(id)introImage;
-(UIImageView *)exampleImageView;
-(id)introVideoAsset;
-(CGSize)titleLabelSize;
-(float)exampleImageWidth;
-(float)exampleImageHeight;
-(CGSize)appDescriptionLabelSize;
-(id)tapGestureRecognizerForConfirmingModal;
-(id)confirmButtonText;
-(void)onConfirmModal;
-(void)setExampleImageView:(UIImageView *)arg1 ;
-(void)setAppDescriptionLabel:(UILabel *)arg1 ;
-(void)setConfirmButton:(IGButton *)arg1 ;
-(id)initWithAlertType:(int)arg1 ;
-(IGAssetPlayerView *)playerView;
-(void)setDelegate:(id<IGAppInstallAlertViewControllerDelegate>)arg1 ;
-(id<IGAppInstallAlertViewControllerDelegate>)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)titleText;
-(id)descriptionText;
-(IGButton *)confirmButton;
-(char)prefersNavigationBarHidden;
@end

