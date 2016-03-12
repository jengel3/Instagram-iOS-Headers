
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, IGRotatingRainbowView;

@interface IGRegistrationBackgroundView : UIView {

	UILabel* _messageLabel;
	float _iconViewOffset;
	UIView* _iconView;
	IGRotatingRainbowView* _rainbowView;

}

@property (nonatomic,readonly) UILabel * messageLabel;                         //@synthesize messageLabel=_messageLabel - In the implementation block
@property (assign,nonatomic) float iconViewOffset;                             //@synthesize iconViewOffset=_iconViewOffset - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGRotatingRainbowView * rainbowView;              //@synthesize rainbowView=_rainbowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 defaultIconView:(id)arg2 ;
-(IGRotatingRainbowView *)rainbowView;
-(float)iconViewOffset;
-(void)transitIconView:(id)arg1 toScreen:(char)arg2 rotateDegree:(float)arg3 ;
-(void)transitToIconView:(id)arg1 inboundAnimation:(int)arg2 outboundAnimation:(int)arg3 ;
-(void)setIconViewOffset:(float)arg1 ;
-(void)setRainbowView:(IGRotatingRainbowView *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)messageLabel;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
@end

