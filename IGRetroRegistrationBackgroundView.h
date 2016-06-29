
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, IGRegistrationBackgroundView, UILabel;

@interface IGRetroRegistrationBackgroundView : UIView {

	UIButton* _footerButton;
	UIView* _footerView;
	IGRegistrationBackgroundView* _backgroundView;
	UIView* _footerViewSeperator;
	int _footerViewType;
	UILabel* _footerViewLabel;

}

@property (nonatomic,retain) IGRegistrationBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * footerViewSeperator;                               //@synthesize footerViewSeperator=_footerViewSeperator - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                        //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                    //@synthesize footerButton=_footerButton - In the implementation block
@property (assign,nonatomic) int footerViewType;                                         //@synthesize footerViewType=_footerViewType - In the implementation block
@property (nonatomic,retain) UILabel * footerViewLabel;                                  //@synthesize footerViewLabel=_footerViewLabel - In the implementation block
-(UIView *)footerViewSeperator;
-(void)setFooterViewSeperator:(UIView *)arg1 ;
-(void)setFooterViewType:(int)arg1 ;
-(void)setupFooterViewForType;
-(int)footerViewType;
-(id)footerViewButtonText;
-(id)footerViewLabelText;
-(void)setFooterViewLabel:(UILabel *)arg1 ;
-(UILabel *)footerViewLabel;
-(UIButton *)footerButton;
-(void)setFooterButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 footerViewType:(int)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRegistrationBackgroundView *)arg1 ;
-(IGRegistrationBackgroundView *)backgroundView;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

