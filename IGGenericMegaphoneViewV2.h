
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGGenericMegaphoneViewV2Delegate;
@class IGGenericMegaphone, UILabel, IGImageView, UIButton, UIView, NSString;

@interface IGGenericMegaphoneViewV2 : UIView {

	char _megaphoneSeen;
	IGGenericMegaphone* _megaphone;
	id<IGGenericMegaphoneViewV2Delegate> _delegate;
	UILabel* _titleView;
	UILabel* _messageView;
	IGImageView* _imageView;
	UIButton* _dismissButton;
	UIView* _lineView;
	UIButton* _buttonOne;
	UIButton* _buttonTwo;
	NSString* _displaySource;

}

@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                    //@synthesize megaphone=_megaphone - In the implementation block
@property (assign,nonatomic,__weak) id<IGGenericMegaphoneViewV2Delegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                                               //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * messageView;                                             //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) IGImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                 //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIButton * buttonOne;                                              //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) UIButton * buttonTwo;                                              //@synthesize buttonTwo=_buttonTwo - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                                //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
@property (nonatomic,copy) NSString * displaySource;                                            //@synthesize displaySource=_displaySource - In the implementation block
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(void)setLineView:(UIView *)arg1 ;
-(UILabel *)messageView;
-(void)setMessageView:(UILabel *)arg1 ;
-(NSString *)displaySource;
-(void)layoutButtons;
-(id)initWithMegaphone:(id)arg1 ;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(UIButton *)buttonOne;
-(UIButton *)buttonTwo;
-(void)didDismiss;
-(void)layoutDismissButton;
-(void)layoutTextView;
-(void)didSelectButtonOne;
-(void)setButtonOne:(UIButton *)arg1 ;
-(void)didSelectButtonTwo;
-(void)setButtonTwo:(UIButton *)arg1 ;
-(id)createTitleView;
-(id)createMessageView;
-(id)createMegaphoneImageView;
-(id)createDismissButton;
-(id)createButtonOne;
-(id)createButtonTwo;
-(void)layoutImageView;
-(id)createButtonForMegaphoneButton:(id)arg1 ;
-(id)megaphoneImage;
-(void)setDisplaySource:(NSString *)arg1 ;
-(void)setDelegate:(id<IGGenericMegaphoneViewV2Delegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGenericMegaphoneViewV2Delegate>)delegate;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(IGImageView *)imageView;
-(void)setImageView:(IGImageView *)arg1 ;
-(UIView *)lineView;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
@end

