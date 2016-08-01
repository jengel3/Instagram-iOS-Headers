
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGGenericMegaphoneViewDelegate;
@class IGGenericMegaphone, IGCoreTextView, IGImageView, UIButton, UIView, IGButton;

@interface IGGenericMegaphoneView : UIView {

	IGGenericMegaphone* _megaphone;
	id<IGGenericMegaphoneViewDelegate> _delegate;
	IGCoreTextView* _titleView;
	IGCoreTextView* _messageView;
	IGImageView* _sideImageView;
	UIButton* _dismissButton;
	UIView* _lineView;
	IGButton* _buttonOne;
	IGButton* _buttonTwo;

}

@property (nonatomic,readonly) IGCoreTextView * titleView;                                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * messageView;                                  //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,readonly) IGImageView * sideImageView;                                   //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                      //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIView * lineView;                                             //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) IGButton * buttonOne;                                            //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) IGButton * buttonTwo;                                            //@synthesize buttonTwo=_buttonTwo - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                //@synthesize megaphone=_megaphone - In the implementation block
@property (assign,nonatomic,__weak) id<IGGenericMegaphoneViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)styleClassForButton:(id)arg1 ;
-(IGCoreTextView *)messageView;
-(IGGenericMegaphone *)megaphone;
-(void)didSelectButton:(id)arg1 ;
-(IGButton *)buttonOne;
-(IGButton *)buttonTwo;
-(void)didDismiss;
-(void)layoutSideImageView;
-(void)layoutDismissButton;
-(void)layoutButtons;
-(void)layoutTextView;
-(float)buttonHorizontalLeftPadding;
-(float)buttonVerticalPadding;
-(IGImageView *)sideImageView;
-(float)rightTextPadding;
-(float)buttonHorizontalRightPadding;
-(float)leftTextPadding;
-(void)didSelectButtonOne;
-(id)buttonForMegaphoneButton:(id)arg1 action:(SEL)arg2 ;
-(void)setButtonOne:(IGButton *)arg1 ;
-(void)didSelectButtonTwo;
-(void)setButtonTwo:(IGButton *)arg1 ;
-(id)styledStringWithText:(id)arg1 font:(id)arg2 defaultColor:(id)arg3 ;
-(void)configButtonsForMegaphone:(id)arg1 ;
-(void)configLabelsForMegaphone:(id)arg1 ;
-(void)configImageViewForMegaphone:(id)arg1 ;
-(void)configDismissButtonForMegaphone:(id)arg1 ;
-(void)configureWithMegaphone:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGGenericMegaphoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGenericMegaphoneViewDelegate>)delegate;
-(IGCoreTextView *)titleView;
-(UIView *)lineView;
-(UIButton *)dismissButton;
@end

