
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGCameraAccessPromptView : UIView {

	UIButton* _instructionButton;

}

@property (nonatomic,retain) UIButton * instructionButton;              //@synthesize instructionButton=_instructionButton - In the implementation block
-(UIButton *)instructionButton;
-(void)instructionButtonDidTap:(id)arg1 ;
-(void)setInstructionButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

