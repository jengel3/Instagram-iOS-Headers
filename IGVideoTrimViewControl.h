
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@protocol IGVideoTrimViewControlDelegate;
@class UIView, UIButton;

@interface IGVideoTrimViewControl : UIControl {

	id<IGVideoTrimViewControlDelegate> _delegate;
	UIView* _buttonPanel;
	UIButton* _doneButton;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UIView * buttonPanel;                                            //@synthesize buttonPanel=_buttonPanel - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                           //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                         //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoTrimViewControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)onDone;
-(void)onCancel;
-(UIView *)buttonPanel;
-(void)setButtonPanel:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGVideoTrimViewControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGVideoTrimViewControlDelegate>)delegate;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
@end

