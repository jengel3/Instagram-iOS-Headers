
#import <UIKit/UIView.h>

@class UIButton, IGDirectInboxAction;

@interface IGDirectActionButton : UIView {

	UIButton* _button;
	IGDirectInboxAction* _action;

}

@property (nonatomic,readonly) UIButton * button;                         //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) IGDirectInboxAction * action;              //@synthesize action=_action - In the implementation block
-(void)didTapButton:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(IGDirectInboxAction *)action;
@end

