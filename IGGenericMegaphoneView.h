
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGGenericMegaphoneViewDelegate;
@class IGGenericMegaphone, IGCoreTextView, IGImageView, UIButton, UIView, IGButton, NSString;

@interface IGGenericMegaphoneView : UIView {

	char _megaphoneSeen;
	IGGenericMegaphone* _megaphone;
	id<IGGenericMegaphoneViewDelegate> _delegate;
	IGCoreTextView* _textView;
	IGImageView* _sideImageView;
	UIButton* _dismissButton;
	UIView* _lineView;
	IGButton* _buttonOne;
	IGButton* _buttonTwo;
	NSString* _displaySource;

}

@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                  //@synthesize megaphone=_megaphone - In the implementation block
@property (assign,nonatomic,__weak) id<IGGenericMegaphoneViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCoreTextView * textView;                                       //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) IGImageView * sideImageView;                                     //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                               //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) IGButton * buttonOne;                                            //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) IGButton * buttonTwo;                                            //@synthesize buttonTwo=_buttonTwo - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                              //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
@property (nonatomic,copy) NSString * displaySource;                                          //@synthesize displaySource=_displaySource - In the implementation block
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(id)initWithFrame:(CGRect)arg1 andMegaphone:(id)arg2 fromDisplaySource:(id)arg3 ;
-(void)logMegaphoneSeen;
-(void)setLineView:(UIView *)arg1 ;
-(IGImageView *)sideImageView;
-(void)setSideImageView:(IGImageView *)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(void)setButtonOne:(IGButton *)arg1 ;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(id)newSideImage;
-(float)additionalSideImageTopPadding;
-(void)didDismiss;
-(void)setButtonTwo:(IGButton *)arg1 ;
-(IGButton *)buttonOne;
-(IGButton *)buttonTwo;
-(void)setDisplaySource:(NSString *)arg1 ;
-(void)layoutSubviewsWithButtonsAtBottom;
-(void)layoutSubviewsWithButtonAtRight;
-(float)buttonHorizontalPadding;
-(float)rightTextPadding;
-(float)leftTextPadding;
-(float)buttonVerticalPadding;
-(void)layoutSideImageView;
-(void)layoutDismissButton;
-(void)layoutButtonOne;
-(void)layoutTextView;
-(void)verticalCenterAll;
-(Class)styleClassForButton:(id)arg1 ;
-(void)didSelectButtonOne;
-(void)didSelectButtonTwo;
-(void)logForAction:(id)arg1 ;
-(void)logTapForButton:(id)arg1 ;
-(NSString *)displaySource;
-(void)setDelegate:(id<IGGenericMegaphoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGGenericMegaphoneViewDelegate>)delegate;
-(void)setTextView:(IGCoreTextView *)arg1 ;
-(id)cacheKey;
-(IGCoreTextView *)textView;
-(UIView *)lineView;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
@end

