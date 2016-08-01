
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGDirectPendingRequestButtonDelegate;
@class NSString, UIView, UILabel, UIButton;

@interface IGDirectPendingRequestButtons : UIView {

	id<IGDirectPendingRequestButtonDelegate> _delegate;
	NSString* _pendingRequestString;
	UIView* _gradientBackground;
	UIView* _backgroundWhite;
	UILabel* _explanationLabel;
	UIButton* _acceptButton;
	UIButton* _denyButton;
	UIView* _labelSeparator;
	UIView* _buttonSeparator;

}

@property (nonatomic,readonly) UIView * gradientBackground;                                         //@synthesize gradientBackground=_gradientBackground - In the implementation block
@property (nonatomic,readonly) UIView * backgroundWhite;                                            //@synthesize backgroundWhite=_backgroundWhite - In the implementation block
@property (nonatomic,readonly) UILabel * explanationLabel;                                          //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,readonly) UIButton * acceptButton;                                             //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,readonly) UIButton * denyButton;                                               //@synthesize denyButton=_denyButton - In the implementation block
@property (nonatomic,readonly) UIView * labelSeparator;                                             //@synthesize labelSeparator=_labelSeparator - In the implementation block
@property (nonatomic,readonly) UIView * buttonSeparator;                                            //@synthesize buttonSeparator=_buttonSeparator - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingRequestButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pendingRequestString;                                         //@synthesize pendingRequestString=_pendingRequestString - In the implementation block
+(id)explanationFont;
+(float)heightForString:(id)arg1 andWidth:(float)arg2 ;
-(UIView *)gradientBackground;
-(UIView *)backgroundWhite;
-(void)didTapAcceptButton;
-(UIButton *)denyButton;
-(void)didTapDenyButton;
-(UIView *)labelSeparator;
-(id)initWithFrame:(CGRect)arg1 andString:(id)arg2 ;
-(NSString *)pendingRequestString;
-(void)setPendingRequestString:(NSString *)arg1 ;
-(void)setDelegate:(id<IGDirectPendingRequestButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectPendingRequestButtonDelegate>)delegate;
-(UIView *)buttonSeparator;
-(UIButton *)acceptButton;
-(UILabel *)explanationLabel;
@end

