
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIButton, IGLabel;

@interface IGLibraryAccessPromptView : UIView {

	UIView* _contentView;
	UIButton* _instructionButton;
	IGLabel* _titleLabel;
	IGLabel* _explanationLabel;
	IGLabel* _instructionLabel;

}

@property (nonatomic,retain) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIButton * instructionButton;              //@synthesize instructionButton=_instructionButton - In the implementation block
@property (nonatomic,retain) IGLabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGLabel * explanationLabel;                //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,retain) IGLabel * instructionLabel;                //@synthesize instructionLabel=_instructionLabel - In the implementation block
+(void)showLibraryDeniedAlertView;
-(UIButton *)instructionButton;
-(void)instructionButtonDidTap:(id)arg1 ;
-(void)setInstructionButton:(UIButton *)arg1 ;
-(void)setExplanationLabel:(IGLabel *)arg1 ;
-(void)attachViews;
-(void)setInstructionLabel:(IGLabel *)arg1 ;
-(IGLabel *)instructionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGLabel *)titleLabel;
-(void)setTitleLabel:(IGLabel *)arg1 ;
-(IGLabel *)explanationLabel;
@end

