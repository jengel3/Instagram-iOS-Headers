
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGAlertBar : UIView {

	char _suppressAlerts;
	char _usingOffset;
	char _displaying;
	char _hideAutomatically;
	UIImageView* _alertView;
	UILabel* _textLabel;
	float _offsetFromTop;
	float _minimumBarHeight;
	float _textTopPadding;
	int _anchoredEdge;

}

@property (nonatomic,retain) UIImageView * alertView;              //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) char displaying;                      //@synthesize displaying=_displaying - In the implementation block
@property (assign,nonatomic) char hideAutomatically;               //@synthesize hideAutomatically=_hideAutomatically - In the implementation block
@property (assign,nonatomic) float offsetFromTop;                  //@synthesize offsetFromTop=_offsetFromTop - In the implementation block
@property (assign,nonatomic) float minimumBarHeight;               //@synthesize minimumBarHeight=_minimumBarHeight - In the implementation block
@property (assign,nonatomic) float textTopPadding;                 //@synthesize textTopPadding=_textTopPadding - In the implementation block
@property (assign,nonatomic) int anchoredEdge;                     //@synthesize anchoredEdge=_anchoredEdge - In the implementation block
@property (nonatomic,readonly) char usingOffset;                   //@synthesize usingOffset=_usingOffset - In the implementation block
+(id)sharedAlertBar;
+(float)alertBarDisplayInterval;
-(void)onAppBackgrounded:(id)arg1 ;
-(void)onAppResumed:(id)arg1 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 anchoredEdge:(int)arg4 withOffsetFromTop:(float)arg5 barHeight:(float)arg6 textTopPadding:(float)arg7 ;
-(void)showInView:(id)arg1 withText:(id)arg2 style:(int)arg3 anchoredEdge:(int)arg4 withOffsetFromTop:(float)arg5 barHeight:(float)arg6 textTopPadding:(float)arg7 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 anchoredEdge:(int)arg4 withOffsetFromTop:(float)arg5 ;
-(void)setOffsetFromTop:(float)arg1 ;
-(void)setMinimumBarHeight:(float)arg1 ;
-(void)setTextTopPadding:(float)arg1 ;
-(void)setAnchoredEdge:(int)arg1 ;
-(void)configureAlertBarWithText:(id)arg1 style:(int)arg2 allowMove:(char)arg3 ;
-(char)hideAutomatically;
-(float)textTopPadding;
-(float)minimumBarHeight;
-(int)anchoredEdge;
-(float)offsetFromTop;
-(void)didShowAlertView;
-(void)didHideAlertView;
-(void)reEnableAlerts;
-(void)showWithText:(id)arg1 style:(int)arg2 ;
-(void)showWithText:(id)arg1 style:(int)arg2 height:(float)arg3 textTopPadding:(float)arg4 ;
-(void)showInView:(id)arg1 withText:(id)arg2 style:(int)arg3 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 barHeight:(float)arg4 textTopPadding:(float)arg5 ;
-(char)usingOffset;
-(char)displaying;
-(void)setDisplaying:(char)arg1 ;
-(void)setHideAutomatically:(char)arg1 ;
-(void)setAlertView:(UIImageView *)arg1 ;
-(UIImageView *)alertView;
-(void)hide;
-(void)show;
-(void)dealloc;
-(id)init;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

