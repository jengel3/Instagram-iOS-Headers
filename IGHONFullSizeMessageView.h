
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGHONFullSizeMessageViewDelegate;
@class UIImageView, UILabel, UIButton;

@interface IGHONFullSizeMessageView : UIView {

	UIImageView* _primaryImageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _doneButton;
	id<IGHONFullSizeMessageViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIImageView * primaryImageView;                                    //@synthesize primaryImageView=_primaryImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,__weak,readonly) id<IGHONFullSizeMessageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)doneFullSizeMessageViewWithDelegate:(id)arg1 ;
+(id)errorFullSizeMessageViewWithDelegate:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3 primaryImage:(id)arg4 delegate:(id)arg5 ;
-(void)setupCheckmarkViewWithImage:(id)arg1 ;
-(void)setupTitleLabelWithText:(id)arg1 ;
-(void)setupMessageLabelWithText:(id)arg1 ;
-(void)setupDoneButtonWithText:(id)arg1 ;
-(UIImageView *)primaryImageView;
-(void)doneButtonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHONFullSizeMessageViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(UIButton *)doneButton;
@end

