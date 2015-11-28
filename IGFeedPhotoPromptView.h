
#import <UIKit/UIView.h>

@class IGSimpleButton;

@interface IGFeedPhotoPromptView : UIView {

	IGSimpleButton* _actionButton;

}

@property (nonatomic,readonly) IGSimpleButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
-(id)initWithHeight:(float)arg1 message:(id)arg2 image:(id)arg3 buttonTitle:(id)arg4 ;
-(IGSimpleButton *)actionButton;
@end

