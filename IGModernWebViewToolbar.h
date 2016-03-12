
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface IGModernWebViewToolbar : UIView {

	UIButton* _backButton;
	UIButton* _forwardButton;
	UIView* _hairlineView;

}

@property (nonatomic,retain) UIButton * backButton;                 //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;              //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIView * hairlineView;                 //@synthesize hairlineView=_hairlineView - In the implementation block
+(id)navigationButtonWithImage:(id)arg1 ;
-(UIButton *)forwardButton;
-(void)setForwardButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)setHairlineView:(UIView *)arg1 ;
-(UIView *)hairlineView;
-(UIButton *)backButton;
@end

