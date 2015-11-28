
#import <UIKit/UIView.h>

@protocol IGFeedPromotionBannerDelegate;
@class IGFeedPromotionBannerConfiguration, UIButton, UILabel, UIImageView;

@interface IGFeedPromotionAppInstallBannerView : UIView {

	id<IGFeedPromotionBannerDelegate> _delegate;
	IGFeedPromotionBannerConfiguration* _configuration;
	UIButton* _installButton;
	UILabel* _textLabel;
	UIImageView* _imageIcon;

}

@property (assign,nonatomic,__weak) id<IGFeedPromotionBannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedPromotionBannerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIButton * installButton;                                        //@synthesize installButton=_installButton - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageIcon;                                         //@synthesize imageIcon=_imageIcon - In the implementation block
-(UIButton *)installButton;
-(UIImageView *)imageIcon;
-(void)onInstallButtonTapped:(id)arg1 ;
-(id)initWithFeedPromotionBannerConfiguration:(id)arg1 ;
-(void)onDismissButtonTapped:(id)arg1 ;
-(void)setInstallButton:(UIButton *)arg1 ;
-(void)setImageIcon:(UIImageView *)arg1 ;
-(void)setDelegate:(id<IGFeedPromotionBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedPromotionBannerDelegate>)delegate;
-(UILabel *)textLabel;
-(void)setConfiguration:(IGFeedPromotionBannerConfiguration *)arg1 ;
-(IGFeedPromotionBannerConfiguration *)configuration;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

