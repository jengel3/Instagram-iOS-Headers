
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class UILabel, IGButton, UIImageView, IGCoreTextView, IGBusinessConversionLoggingHelper, NSString;

@interface IGBusinessConversionViewController : IGViewController <IGCoreTextLinkHandler, IGBusinessConversionFlowStep> {

	char _didDeclineFacebookAuth;
	id<IGBusinessConversionViewControllerDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGButton* _continueButton;
	UIImageView* _businessIconImageView;
	IGCoreTextView* _disclaimerLabel;
	IGBusinessConversionLoggingHelper* _loggingHelper;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGButton * continueButton;                                                   //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIImageView * businessIconImageView;                                         //@synthesize businessIconImageView=_businessIconImageView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * disclaimerLabel;                                            //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (assign,nonatomic) char didDeclineFacebookAuth;                                                 //@synthesize didDeclineFacebookAuth=_didDeclineFacebookAuth - In the implementation block
@property (nonatomic,retain) IGBusinessConversionLoggingHelper * loggingHelper;                           //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)businessConversionNavigationControllerWithEntrypoint:(id)arg1 delegate:(id)arg2 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)onCancelModal;
-(void)setContinueButton:(IGButton *)arg1 ;
-(IGButton *)continueButton;
-(IGBusinessConversionLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGBusinessConversionLoggingHelper *)arg1 ;
-(id)analyticsFlowStep;
-(id)initWithEntrypoint:(id)arg1 ;
-(void)setBusinessIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)businessIconImageView;
-(void)setDisclaimerLabel:(IGCoreTextView *)arg1 ;
-(IGCoreTextView *)disclaimerLabel;
-(void)setDidDeclineFacebookAuth:(char)arg1 ;
-(id)initializeContinueButtonWithFrame:(CGRect)arg1 ;
-(void)openPageSelectionViewControllerWithAccessToken:(id)arg1 ;
-(void)openPageSelectionViewControllerWithCurrentUserAccessToken;
-(void)getAccessTokenAndPushBusinessSelectorIfPossible;
-(char)didDeclineFacebookAuth;
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

