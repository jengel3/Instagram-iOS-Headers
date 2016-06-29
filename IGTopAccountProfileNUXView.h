
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGTopAccountProfileNUXViewDelegate;
@class UIView, UILabel, IGCoreTextView, UIButton, NSString;

@interface IGTopAccountProfileNUXView : UIView <IGCoreTextLinkHandler> {

	id<IGTopAccountProfileNUXViewDelegate> _delegate;
	UIView* _alertContainer;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGCoreTextView* _ctaLabel;
	UIButton* _closeButton;

}

@property (nonatomic,readonly) UIView * alertContainer;                                           //@synthesize alertContainer=_alertContainer - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * ctaLabel;                                         //@synthesize ctaLabel=_ctaLabel - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                            //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGTopAccountProfileNUXViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(id)createTitleLabel;
-(void)setUpViewHierarchy;
-(id)createAlertBackground;
-(id)createSubitleLabel;
-(id)createCTALabel;
-(id)createCloseButton;
-(void)didTapCloseButton:(id)arg1 ;
-(CGRect)rectForTitleWithContainerRect:(CGRect)arg1 ;
-(CGRect)rectForSubtitleWithContainerRect:(CGRect)arg1 titleRect:(CGRect)arg2 ;
-(IGCoreTextView *)ctaLabel;
-(CGRect)rectForCTAWithContainerRect:(CGRect)arg1 subtitleRect:(CGRect)arg2 ;
-(CGRect)rectForCloseButtonWithContainerRect:(CGRect)arg1 ;
-(UIView *)alertContainer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTopAccountProfileNUXViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGTopAccountProfileNUXViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setUserName:(id)arg1 ;
-(UIButton *)closeButton;
@end

