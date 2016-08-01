
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGBusinessToolAlertViewDelegate;
@class UIView, UILabel, IGCoreTextView, UIButton, NSString;

@interface IGBusinessToolAlertView : UIView <IGCoreTextLinkHandler> {

	id<IGBusinessToolAlertViewDelegate> _delegate;
	UIView* _alertContainer;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGCoreTextView* _ctaLabel;
	UIButton* _closeButton;

}

@property (nonatomic,readonly) UIView * alertContainer;                                        //@synthesize alertContainer=_alertContainer - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * ctaLabel;                                      //@synthesize ctaLabel=_ctaLabel - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessToolAlertViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createTitleLabel;
-(void)setUpViewHierarchy;
-(id)createAlertBackground;
-(id)createSubitleLabel;
-(id)createCTALabel;
-(id)createCloseButton;
-(void)didTapCloseButton:(id)arg1 ;
-(IGCoreTextView *)ctaLabel;
-(CGRect)rectForTitleWithContainerRect:(CGRect)arg1 ;
-(CGRect)rectForSubtitleWithContainerRect:(CGRect)arg1 titleRect:(CGRect)arg2 ;
-(CGRect)rectForCTAWithContainerRect:(CGRect)arg1 subtitleRect:(CGRect)arg2 ;
-(CGRect)rectForCloseButtonWithContainerRect:(CGRect)arg1 ;
-(UIView *)alertContainer;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setButtonString:(id)arg1 ;
-(void)shouldShowCloseArrow:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGBusinessToolAlertViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<IGBusinessToolAlertViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setMessage:(id)arg1 ;
-(UIButton *)closeButton;
@end

