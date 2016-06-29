
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>

@protocol IGCustomAlertViewControllerDelegate;
@class UILabel, UIImageView, IGAssetPlayerView, UIButton, IGButton, UIImage, AVAsset, NSString;

@interface IGCustomAlertViewController : IGViewController {

	char _dismissible;
	char _onlyConfirmButtonTappable;
	id<IGCustomAlertViewControllerDelegate> _delegate;
	UILabel* _titleLabel;
	UIImageView* _exampleImageView;
	IGAssetPlayerView* _playerView;
	UILabel* _appDescriptionLabel;
	UIButton* _cancelButton;
	IGButton* _confirmButton;
	UIImage* _introImage;
	AVAsset* _videoAsset;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _confirmButtonText;
	unsigned _layout;
	CGSize _introAssetSize;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * exampleImageView;                                       //@synthesize exampleImageView=_exampleImageView - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                       //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UILabel * appDescriptionLabel;                                        //@synthesize appDescriptionLabel=_appDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) IGButton * confirmButton;                                             //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIImage * introImage;                                                 //@synthesize introImage=_introImage - In the implementation block
@property (nonatomic,retain) AVAsset * videoAsset;                                                 //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                   //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                             //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * confirmButtonText;                                           //@synthesize confirmButtonText=_confirmButtonText - In the implementation block
@property (assign,nonatomic) CGSize introAssetSize;                                                //@synthesize introAssetSize=_introAssetSize - In the implementation block
@property (assign,nonatomic) unsigned layout;                                                      //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) char dismissible;                                                     //@synthesize dismissible=_dismissible - In the implementation block
@property (assign,nonatomic) char onlyConfirmButtonTappable;                                       //@synthesize onlyConfirmButtonTappable=_onlyConfirmButtonTappable - In the implementation block
@property (assign,nonatomic,__weak) id<IGCustomAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newAlertWithBoomerangConfiguration;
+(id)newAlertWithLayoutConfiguration;
+(id)newAlertWithBusinessConfiguration;
+(id)newAlertForProfilePictureInstantShareToFeedWithImage:(id)arg1 ;
+(id)newAlertForProfilePictureSharingWithImage:(id)arg1 ;
-(id)analyticsModule;
-(UILabel *)appDescriptionLabel;
-(UIImage *)introImage;
-(UIImageView *)exampleImageView;
-(CGSize)titleLabelSize;
-(CGSize)appDescriptionLabelSize;
-(CGSize)introAssetSize;
-(char)dismissible;
-(float)titleWidth;
-(char)onlyConfirmButtonTappable;
-(id)tapGestureRecognizerForConfirmingModal;
-(void)onCancelModal;
-(NSString *)confirmButtonText;
-(void)onConfirmModal;
-(id)initWithIntroImage:(id)arg1 introVideoAsset:(id)arg2 introAssetSize:(CGSize)arg3 titleText:(id)arg4 descriptionText:(id)arg5 confirmButtonText:(id)arg6 layout:(unsigned)arg7 dismissible:(char)arg8 onlyConfirmButtonTappable:(char)arg9 ;
-(void)setExampleImageView:(UIImageView *)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(void)setAppDescriptionLabel:(UILabel *)arg1 ;
-(void)setConfirmButton:(IGButton *)arg1 ;
-(void)setIntroImage:(UIImage *)arg1 ;
-(void)setConfirmButtonText:(NSString *)arg1 ;
-(void)setIntroAssetSize:(CGSize)arg1 ;
-(void)setDismissible:(char)arg1 ;
-(void)setOnlyConfirmButtonTappable:(char)arg1 ;
-(IGAssetPlayerView *)playerView;
-(AVAsset *)videoAsset;
-(void)setVideoAsset:(AVAsset *)arg1 ;
-(void)setDelegate:(id<IGCustomAlertViewControllerDelegate>)arg1 ;
-(id<IGCustomAlertViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(unsigned)layout;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)setLayout:(unsigned)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(IGButton *)confirmButton;
-(char)prefersNavigationBarHidden;
@end

