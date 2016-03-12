
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGUnifiedWebViewToolbarDelegate;
@class UIButton, CALayer;

@interface IGUnifiedWebViewToolbar : UIView {

	id<IGUnifiedWebViewToolbarDelegate> _delegate;
	UIButton* _forwardButton;
	UIButton* _backButton;
	CALayer* _topBorder;

}

@property (assign,nonatomic,__weak) id<IGUnifiedWebViewToolbarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;                                         //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                            //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) CALayer * topBorder;                                              //@synthesize topBorder=_topBorder - In the implementation block
+(id)navigationButtonWithImage:(id)arg1 forDirection:(unsigned)arg2 ;
-(UIButton *)forwardButton;
-(void)setForwardButton:(UIButton *)arg1 ;
-(void)updateNavigationButtonsForWebView:(id)arg1 ;
-(void)forwardNavigationButtonTapped:(id)arg1 ;
-(void)backNavigationButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGUnifiedWebViewToolbarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGUnifiedWebViewToolbarDelegate>)delegate;
-(void)setBackButton:(UIButton *)arg1 ;
-(CALayer *)topBorder;
-(void)setTopBorder:(CALayer *)arg1 ;
-(UIButton *)backButton;
@end

