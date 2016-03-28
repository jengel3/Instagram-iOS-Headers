
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class UILabel, IGButton, UIImageView, NSString;

@interface IGBusinessConversionViewController : IGViewController <IGBusinessConversionFlowStep> {

	id<IGBusinessConversionViewControllerDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGButton* _continueButton;
	UIImageView* _businessIconImageView;
	UILabel* _disclaimerLabel;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGButton * continueButton;                                                   //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIImageView * businessIconImageView;                                         //@synthesize businessIconImageView=_businessIconImageView - In the implementation block
@property (nonatomic,retain) UILabel * disclaimerLabel;                                                   //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGButton *)continueButton;
-(void)setContinueButton:(IGButton *)arg1 ;
-(id)analyticsInfoForFlowStep;
-(void)setBusinessIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)businessIconImageView;
-(void)setDisclaimerLabel:(UILabel *)arg1 ;
-(UILabel *)disclaimerLabel;
-(id)initializeContinueButtonWithFrame:(CGRect)arg1 ;
-(void)openPageSelectionViewControllerWithAccessToken:(id)arg1 ;
-(void)openPageSelectionViewControllerWithCurrentUserAccessToken;
-(void)getAccessTokenAndPushBusinessSelectorIfPossible;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

