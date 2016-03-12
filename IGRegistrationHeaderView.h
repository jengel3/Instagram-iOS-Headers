
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGRegistrationHeaderView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                     //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(id)initWithBackgroundImage:(id)arg1 instructionalText:(id)arg2 height:(float)arg3 ;
-(UILabel *)instructionLabel;
-(id)init;
-(void)layoutSubviews;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

